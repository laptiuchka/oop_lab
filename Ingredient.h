//
// Created by Tetiana on 16.03.2025.
//

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
    ~Ingredient()
    {
        std::cout << "Ingredient removed: " << name << std::endl;
    }
    void display() const;

};



#endif //INGREDIENT_H
