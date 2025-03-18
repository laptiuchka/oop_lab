#include "RecipeBook.h"
#include <iostream>

int main()
{
    RecipeBook book;
    Recipe borshch("Borshch", "Cook for 40 minutes.");
    borshch.addIngredient(Ingredient("Cabbage", 200, "g"));
    borshch.addIngredient(Ingredient("Potato", 300, "g"));
    borshch.addIngredient(Ingredient("Beetroot", 150, "g"));
    book.addRecipe(borshch);

    Recipe pancakes("Pancakes", "Fry for 2 minutes from each side.");
    pancakes.addIngredient(Ingredient("Flour", 200, "g"));
    pancakes.addIngredient(Ingredient("Milk", 500, "ml"));
    pancakes.addIngredient(Ingredient("Eggs", 3, "pcs"));
    book.addRecipe(pancakes);

    Recipe defaultRecipe;
    book.addRecipe(defaultRecipe);

    std::cout << "Recipe Book: " << std::endl;
    book.displayAll();
    return 0;
}