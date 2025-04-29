#include "Ingredient.h"
#include <iostream>

Ingredient::Ingredient(const std::string& name, double quantity, const std::string& unit)
    : Item(name), quantity(quantity), unit(unit) {}

Ingredient::Ingredient(const Ingredient& other)
    : Item(other.name), quantity(other.quantity), unit(other.unit) {
    std::cout << "Copying Ingredient: " << other.name << std::endl;
}

Ingredient::Ingredient(Ingredient&& other) noexcept
    : Item(std::move(other.name)), quantity(other.quantity), unit(std::move(other.unit)) {
    std::cout << "Moving Ingredient: " << name << std::endl;
}

Ingredient::~Ingredient() {
    std::cout << "Ingredient removed: " << name << std::endl;
}

Ingredient& Ingredient::operator=(const Ingredient& other) {
    if (this != &other) {
        name = other.name;
        quantity = other.quantity;
        unit = other.unit;
    }
    return *this;
}

void Ingredient::display() const {
    std::cout << name << " " << quantity << " " << unit << std::endl;
}

std::ostream& operator<<(std::ostream& os, const Ingredient& ingredient) {
    os << ingredient.name << " " << ingredient.quantity << " " << ingredient.unit;
    return os;
}

std::istream& operator>>(std::istream& is, Ingredient& ingredient) {
    is >> ingredient.name >> ingredient.quantity >> ingredient.unit;
    return is;
}


