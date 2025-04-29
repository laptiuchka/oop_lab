#ifndef RECIPEBOOK_H
#define RECIPEBOOK_H
#include "Recipe.h"
#include <vector>

class RecipeBook {
private:
    std::vector<Recipe*> recipes;
    static int recipeCount;

public:
    RecipeBook();
    RecipeBook(const RecipeBook& other);
    RecipeBook(RecipeBook&& other) noexcept;
    RecipeBook& operator=(const RecipeBook& other);
    ~RecipeBook();

    void addRecipe(Recipe* recipe);
    void displayAll() const;

    static int getRecipeCount();
};

#endif // RECIPEBOOK_H
