#ifndef RECIPE_H
#define RECIPE_H
#include "AbstractRecipe.h"
#include <vector>

class Recipe : public AbstractRecipe {
protected:
    std::string instructions;

public:
    Recipe(const std::string& title, const std::string& instructions);
    Recipe();
    Recipe(const Recipe& other);
    Recipe(Recipe&& other) noexcept;
    ~Recipe();

    Recipe& operator=(const Recipe& other);

    void addIngredient(const Ingredient& ingredient);
    void display() const override;
};

#endif // RECIPE_H
