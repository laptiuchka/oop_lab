#ifndef ADVANCEDRECIPE_H
#define ADVANCEDRECIPE_H
#include "Recipe.h"

class AdvancedRecipe : public Recipe {
private:
    std::string category;
    int difficultyLevel;

public:
    AdvancedRecipe(const std::string& title, const std::string& instructions, const std::string& category, int difficulty);
    void display() const override;
};

#endif // ADVANCEDRECIPE_H
