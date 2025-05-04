#include "AdvancedRecipe.h"
#include <iostream>

AdvancedRecipe::AdvancedRecipe(const std::string& title, const std::string& instructions,
                               const std::string& category, int difficulty)
    : Recipe(title, instructions), category(category), difficulty(difficulty) {}

void AdvancedRecipe::display() const {
    Recipe::display();
    std::cout << "Category: " << category << ", Difficulty: " << difficulty << std::endl;
}

std::string AdvancedRecipe::getType() const {
    return "Advanced Recipe";
}