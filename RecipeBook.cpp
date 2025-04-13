//
// Created by Tetiana on 16.03.2025.
//

#include "RecipeBook.h"
#include <iostream>

int RecipeBook::recipeCount = 0;
RecipeBook::RecipeBook() = default;
RecipeBook::RecipeBook(const RecipeBook& other)
    : recipes(other.recipes) {
std::cout << "Copying RecipeBook" << std::endl;
}
RecipeBook::RecipeBook(RecipeBook&& other) noexcept
: recipes(std::move(other.recipes)) {
std::cout << "Moving RecipeBook" << std::endl;
}
RecipeBook::~RecipeBook()
{
    std::cout << "Recipe book removed" << std::endl;
}

void RecipeBook::addRecipe(const Recipe& recipe)
{
    recipes.push_back(recipe);
    recipeCount++;
}
void RecipeBook::displayAll() const
{
    for (const auto& recipe : recipes)
    {
        recipe.display();
        std::cout << "--------------" << std::endl;
    }
}
int RecipeBook::getRecipeCount()
{
    return recipeCount;
}
