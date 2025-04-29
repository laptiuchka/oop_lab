#ifndef ABSTRACTRECIPE_H
#define ABSTRACTRECIPE_H
#include <vector>
#include "Ingredient.h"

class AbstractRecipe {
protected:
    std::string title;
    std::vector<Ingredient> ingredients;

public:
    AbstractRecipe(const std::string& title);
    virtual ~AbstractRecipe() {}
    virtual void display() const = 0;
};

#endif // ABSTRACTRECIPE_H