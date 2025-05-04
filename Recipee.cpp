#include "Recipe.h"
#include <iostream>

Recipe::Recipe(const std::string& title, const std::string& instructions)
    : AbstractRecipe(title), instructions(instructions) {}

void Recipe::display() const {
    std::cout << "Recipe: " << title << "\nInstructions: " << instructions << "\nIngredients:\n";
    for (const auto& ing : ingredients) {
        ing.display();
    }
}

std::string Recipe::getType() const {
    return "Basic Recipe";
}