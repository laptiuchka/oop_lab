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

    std::cout << "Recipe Count: " << RecipeBook::getRecipeCount() << std::endl;

    Ingredient sugar("Sugar", 100, "g");
    Ingredient negativeSugar = -sugar;
    std::cout << "Negative Sugar: " << negativeSugar << std::endl;

    Ingredient salt("Salt", 50, "g");
    Ingredient combinedSalt = salt + Ingredient("Salt", 30, "g");
    std::cout << "Combined Salt: " << combinedSalt << std::endl;

    try
    {
        Ingredient invalidCombine = sugar + salt;
    } catch (const std::invalid_argument& e)
    {
        std::cerr << e.what() << std::endl;
    }

    Ingredient customIngredient;
    std::cout << "Enter an ingredient (format: Name Quantity Unit): ";
    std::cin >> customIngredient;
    std::cout << "You entered: " << customIngredient << std::endl;
    return 0;
}