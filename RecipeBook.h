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
    public:
    RecipeBook() = default;
    ~RecipeBook()
    {
        std::cout << "Recipe book removed" << std::endl;
    }
    void addRecipe(const Recipe& recipe);
    void displayAll() const;

};



#endif //RECIPEBOOK_H
