#pragma once
#include "Recipe.h"
#include <vector>

class Recipelist
{
public:
    void AddRecipe();
    const std::vector<Recipe>& GetRecipes() const;

private:
    std::vector<Recipe> recipes;
};


