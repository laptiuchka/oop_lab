#ifndef RECIPE_H
#define RECIPE_H

#include "AbstractRecipe.h"

class Recipe : public AbstractRecipe {
private:
    std::string instructions;

public:
    Recipe(const std::string& title, const std::string& instructions);
    void display() const override final;
    std::string getType() const override;
};

#endif // RECIPE_H