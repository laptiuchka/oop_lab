//
// Created by Tetiana on 16.03.2025.
//

#ifndef RECIPE_H
#define RECIPE_H
#include "Ingredient.h"
#include <vector>
#include <string>


class Recipe {
private:
    std::string title;
    std::vector<Ingredient> ingredients;
    std::string instructions;
    public:
    Recipe(const std::string& title, const std::string& instructions);
    Recipe();
    Recipe(const Recipe& other); //copy constructor
    Recipe(Recipe&& other) noexcept; //move
    ~Recipe()
    {
        std::cout << "Recipe removed: " << title << std::endl; //деструктор
    }
    void addIngredient(const Ingredient& ingredient); //methods
    void display() const; //methods
    const std::vector<Ingredient>& getIngredients() const; // mod const

};



#endif //RECIPE_H
