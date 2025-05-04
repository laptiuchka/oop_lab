#include "Ingredient.h"
#include <iostream>

Ingredient::Ingredient(const std::string& name, double quantity, const std::string& unit)
    : name(name), quantity(quantity), unit(unit) {}

void Ingredient::display() const {
    std::cout << name << ": " << quantity << " " << unit << std::endl;
}