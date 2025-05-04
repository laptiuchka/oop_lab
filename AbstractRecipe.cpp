#include "AbstractRecipe.h"
#include <iostream>

AbstractRecipe::AbstractRecipe(const std::string& title) : title(title) {}

AbstractRecipe::~AbstractRecipe() {}

void AbstractRecipe::addIngredient(const Ingredient& ingredient) {
    ingredients.push_back(ingredient);
}

void AbstractRecipe::printType() const {
    std::cout << "This is a recipe of type: " << getType() << std::endl;
}