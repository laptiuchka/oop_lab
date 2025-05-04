#include "AbstractRecipe.h"
#include "Recipe.h"
#include "AdvancedRecipe.h"
#include <iostream>
#include <vector>

void printWithPointer(const AbstractRecipe* recipe) {
    recipe->display();
    recipe->printType();
}

void printWithReference(const AbstractRecipe& recipe) {
    recipe.display();
    std::cout << "Using reference: " << recipe.getType() << std::endl;
}

int main() {
    std::vector<AbstractRecipe*> recipes;

    recipes.push_back(new Recipe("Borshch", "Boil for 40 min."));
    recipes.push_back(new AdvancedRecipe("Pancakes", "Fry both sides", "Dessert", 2));

    for (const auto& recipe : recipes) {
        printWithPointer(recipe);     // run-time via pointer
        printWithReference(*recipe);  // run-time via reference
        std::cout << "----------------------\n";
    }

    for (auto& recipe : recipes) {
        delete recipe;
    }

    return 0;
}