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
    Recipe() : Recipe("Untitled", "No instructions provided"){}
    ~Recipe()
    {
        std::cout << "Recipe removed: " << title << std::endl;
    }
    void addIngredient(const Ingredient& ingredient);
    void display() const;

};



#endif //RECIPE_H
