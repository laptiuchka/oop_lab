//
// Created by Tetiana on 16.03.2025.
//

#include "Recipe.h"
#include <iostream>
Recipe::Recipe(const std::string& title, const std::string& instructions) //конструктор
    : title(title), instructions(instructions) {}
Recipe::Recipe()
    : Recipe ("Untitled", "No instructions provided") {}
Recipe::Recipe(const Recipe& other)
: title(other.title), ingredients(other.ingredients), instructions(other.instructions) {
std::cout << "Copying Recipe: " << other.title << std::endl;
}
Recipe::Recipe(Recipe&& other) noexcept
: title(std::move(other.title)), ingredients(std::move(other.ingredients)), instructions(std::move(other.instructions))
{
    std::cout << "Moving Recipe: " << title << std::endl;
}
Recipe::~Recipe() {
std::cout << "Recipe removed: " << title << std::endl;


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
const std::vector<Ingredient>& Recipe::getIngredients() const
{
    return this->ingredients;
}

