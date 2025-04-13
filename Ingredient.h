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
    Ingredient(const Ingredient& other);//конструктор копіювання
    Ingredient(Ingredient&& other) noexcept //move constructor
    ~Ingredient()
    {
        std::cout << "Ingredient removed: " << name << std::endl;
    }
    Ingredient& updateQuantity(double newQuantity); //this
    void display() const;
    std::string getName() const; //modificator const
    friend std::ostream& operator<<(std::ostream& os, const Ingredient& ingredient); //stream insertion
    friend std::istream& operator>>(std::istream& is, Ingredient& ingredient); //stream extraction
    friend Ingredient& operator+(const Ingredient& lhs, const Ingredient& rhs); //binary operator

    Ingredient operator- () const; //unary operator

};



#endif //INGREDIENT_H
