#include "AdvancedRecipe.h"

AdvancedRecipe::AdvancedRecipe(const std::string& title, const std::string& instructions, const std::string& category, int difficulty)
: Recipe(title, instructions), category(category), difficultyLevel(difficulty) {}

void AdvancedRecipe::display() const {
    Recipe::display();
    std::cout << "Category: " << category << "\nDifficulty: " << difficultyLevel << "/5\n";
}
