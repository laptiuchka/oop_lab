#include "RecipeBook.h"

int RecipeBook::recipeCount = 0;

RecipeBook::RecipeBook() {}

RecipeBook::RecipeBook(const RecipeBook& other) {
    for (const auto& recipe : other.recipes) {
        recipes.push_back(new Recipe(*recipe));
    }
    recipeCount = other.recipeCount;
}

RecipeBook::RecipeBook(RecipeBook&& other) noexcept : recipes(std::move(other.recipes)) {
    other.recipes.clear();
}

RecipeBook& RecipeBook::operator=(const RecipeBook& other) {
    if (this != &other) {
        for (auto& recipe : recipes) {
            delete recipe;
        }
        recipes.clear();
        for (const auto& recipe : other.recipes) {
            recipes.push_back(new Recipe(*recipe));
        }
        recipeCount = other.recipeCount;
    }
    return *this;
}

RecipeBook::~RecipeBook() {
    for (auto& recipe : recipes) {
        delete recipe;
    }
}

void RecipeBook::addRecipe(Recipe* recipe) {
    recipes.push_back(recipe);
    recipeCount++;
}

void RecipeBook::displayAll() const {
    for (const auto& recipe : recipes) {
        recipe->display();
        std::cout << "------------------\n";
    }
}

int RecipeBook::getRecipeCount() {
    return recipeCount;
}
