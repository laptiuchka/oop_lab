//
// Created by Tetiana on 16.03.2025.
//

#include "RecipeBook.h"
#include <iostream>

void RecipeBook::addRecipe(const Recipe& recipe)
{
    recipes.push_back(recipe);
}
void RecipeBook::displayAll() const
{
    for (const auto& recipe : recipes)
    {
        recipe.display();
        std::cout << "--------------" << std::endl;
    }
}