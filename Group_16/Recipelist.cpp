#include "Recipelist.h"

void Recipelist::AddRecipe()
{
    Recipe hpPotion(1, 1);
    hpPotion.AddIngredient(1,1);
    hpPotion.AddIngredient(1,1);
    recipes.push_back(hpPotion);
   
}

const std::vector<Recipe>& Recipelist::GetRecipes() const
{
    return recipes;
}
