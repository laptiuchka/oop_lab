#include "Ingredient.h"

Ingredient::Ingredient(const std::string& name, double quantity, const std::string& unit)
    :name(name), quantity(quantity), unit(unit){}
Ingredient::Ingredient(const Ingredient& other) //копі конструктор
: name(other.name), quantity(other.quantity), unit(other.unit)
{
    std::cout << "Copying Ingredient: " << other.name << std::endl;
}

Ingredient::Ingredient(Ingredient&& other) noexcept
: name(std::move(other.name)), quantity(other.quantity), unit(std::move(other.unit))
{
std::cout << "Moving Ingredient: " << name << std::endl;
}

Ingredient& Ingredient::updateQuantity(double newQuantity)
{
    this->quantity = newQuantity;
    return *this;
}

std::ostream& operator<<(std::ostream& os, const Ingredient& ingredient)
{
    os << ingredient.name << " " << ingredient.quantity << " " << ingredient.unit;
    return os;
}

std::istream& operator>>(std::istream& is, Ingredient& ingredient)
{
    is >> ingredient.name >> ingredient.quantity >> ingredient.unit;
    return is;
}

Ingredient& operator+(const Ingredient& lhs, const Ingredient& rhs)
{
    if (lhs.name == rhs.name && lhs.unit == rhs.unit)
    {
        return Ingredient(lhs.name, lhs.quantity + rhs.quantity, lhs.unit);
    }
throw std::invalid_argument("Cannot add ingredients with different names or units");
}
Ingredient Ingredient::operator-() const
{
    return Ingredient(name, - quantity, unit);
}

void Ingredient::display() const {
    std::cout << name << " " << quantity << " " << unit << std::endl;
}
std::string Ingredient::getName() const
{
    return this->name;
}

