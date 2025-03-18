//
// Created by Tetiana on 16.03.2025.
//

#include "Recipe.h"
#include <iostream>
Recipe::Recipe(const std::string& title, const std::string& instructions)
    : title(title), instructions(instructions) {}
void Recipe::addIngredient(const Ingredient& ingredient) {
ingredients.push_back(ingredient);
}
void Recipe::display() const
{
    std::cout << "Recipe: " << title << std::endl;
    std::cout << "Ingredients:" << std::endl;
    for (const auto& ingredient : ingredients)
    {
        ingredient.display();
    }
std::cout << "Instructions: " << instructions << std::endl;
}


