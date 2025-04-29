#include "Recipe.h"

Recipe::Recipe(const std::string& title, const std::string& instructions)
: AbstractRecipe(title), instructions(instructions) {}

Recipe::Recipe() : AbstractRecipe("Unknown"), instructions("No instructions") {}

Recipe::Recipe(const Recipe& other) : AbstractRecipe(other.title), instructions(other.instructions), ingredients(other.ingredients) {}

Recipe::Recipe(Recipe&& other) noexcept : AbstractRecipe(std::move(other.title)), instructions(std::move(other.instructions)), ingredients(std::move(other.ingredients)) {}

Recipe::~Recipe() {}

Recipe& Recipe::operator=(const Recipe& other) {
    if (this != &other) {
        title = other.title;
        instructions = other.instructions;
        ingredients = other.ingredients;
    }
    return *this;
}

void Recipe::addIngredient(const Ingredient& ingredient) {
    ingredients.push_back(ingredient);
}

void Recipe::display() const {
    std::cout << "Recipe: " << title << "\nInstructions: " << instructions << "\nIngredients:\n";
    for (const auto& ing : ingredients) {
        ing.display();
    }
}