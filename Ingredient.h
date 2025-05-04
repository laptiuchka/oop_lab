#ifndef INGREDIENT_H
#define INGREDIENT_H

#include <string>
#include <iostream>

class Ingredient {
private:
    std::string name;
    double quantity;
    std::string unit;

public:
    Ingredient(const std::string& name = "Unknown", double quantity = 0, const std::string& unit = "pcs");

    void display() const;
};

#endif // INGREDIENT_H