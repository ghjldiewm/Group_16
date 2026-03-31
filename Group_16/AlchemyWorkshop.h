#pragma once
#include <iostream>
#include "ICraftworkshop.h"
#include "Recipe.h"
#include "Inventory.h"
#include "Craft.h"

class AlchemyWorkshop :public ICraftworkshop
{
public:
    bool CraftItem(Inventory& inv, const Recipe& recipe) override
    {
        const std::map<int, int>& ingredients = recipe.GetIngredients();

        for (std::map<int, int>::const_iterator it = ingredients.begin(); it != ingredients.end(); ++it)
        {
            int itemId = it->first;
            int count = it->second;

            if (!inv.HasItem(itemId, count))
            {
                std::cout << "재료 부족!" << std::endl;
                return false;
            }
        }
        for (std::map<int, int>::const_iterator it = ingredients.begin(); it != ingredients.end(); ++it)
        {
            int itemId = it->first;
            int count = it->second;
            inv.RemoveItem(it->first, it->second);
        }

        Craft::CreateItem(inv, recipe.GetResultID(), recipe.GetResultCount());

        std::cout << "제작 성공!" << std::endl;
        return true;
    }
};
