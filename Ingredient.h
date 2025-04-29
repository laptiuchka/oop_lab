#ifndef INGREDIENT_H
#define INGREDIENT_H
#include <string>

#include "Item.h"

class Ingredient : public Item {
private:
    double quantity;
    std::string unit;

public:
    Ingredient(const std::string& name = "Unknown", double quantity = 0, const std::string& unit = "pcs");
    Ingredient(const Ingredient& other);
    Ingredient(Ingredient&& other) noexcept;
    ~Ingredient();

    Ingredient& operator=(const Ingredient& other);
    Ingredient& updateQuantity(double newQuantity);

    void display() const override;

    friend std::ostream& operator<<(std::ostream& os, const Ingredient& ingredient);
    friend std::istream& operator>>(std::istream& is, Ingredient& ingredient);
    friend Ingredient operator+(const Ingredient& lhs, const Ingredient& rhs);
    Ingredient operator-() const;
};

#endif // INGREDIENT_H
