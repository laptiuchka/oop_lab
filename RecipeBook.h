//
// Created by Tetiana on 16.03.2025.
//

#ifndef RECIPEBOOK_H
#define RECIPEBOOK_H
#include "Recipe.h"
#include <vector>


class RecipeBook {
private:
    std::vector<Recipe> recipes;
    static int recipeCount;

    public:
    RecipeBook();
    RecipeBook(const RecipeBook& other); //copy
    RecipeBook(RecipeBook&& other) noexcept; //move
    ~RecipeBook();

    void addRecipe(const Recipe& recipe);
    void displayAll() const;
    static int getRecipeCount();

};



#endif //RECIPEBOOK_H
