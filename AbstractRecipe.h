#ifndef ABSTRACTRECIPE_H
#define ABSTRACTRECIPE_H

#include <vector>
#include <string>
#include "Ingredient.h"
#include "Printable.h"

class AbstractRecipe : public Printable {
protected:
    std::string title;
    std::vector<Ingredient> ingredients;

public:
    AbstractRecipe(const std::string& title);
    virtual ~AbstractRecipe();

    virtual void addIngredient(const Ingredient& ingredient);
    virtual void display() const = 0;
    virtual std::string getType() const = 0;
    void printType() const override;
};

#endif // ABSTRACTRECIPE_H