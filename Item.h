#ifndef ITEM_H
#define ITEM_H
#include <string>
#include <iostream>

class Item {
protected:
    std::string name;

public:
    Item(const std::string& name = "Unknown") : name(name) {}
    virtual ~Item() { std::cout << "Item removed: " << name << std::endl; }

    virtual void display() const = 0; // Чисто віртуальний метод
};

#endif // ITEM_H