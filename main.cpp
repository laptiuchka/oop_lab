#include "RecipeBook.h"
#include <iostream>
#include "Ingredient.h"


int main() {
    RecipeBook book;

    Recipe* borshch = new Recipe("Borshch", "Cook for 40 minutes.");
    borshch->addIngredient(Ingredient("Cabbage", 200, "g"));
    book.addRecipe(borshch);

    AdvancedRecipe* pancakes = new AdvancedRecipe("Pancakes", "Fry for 2 minutes each side.", "Dessert", 3);
    pancakes->addIngredient(Ingredient("Flour", 200, "g"));
    book.addRecipe(pancakes);

    book.displayAll();
    std::cout << "Recipe count: " << RecipeBook::getRecipeCount() << std::endl;

    return 0;
}

