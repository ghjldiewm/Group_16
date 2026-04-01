#pragma once
#include "Recipe.h"
#include "Inventory.h"
#include "Itemlist.h"
#include <vector>

class CraftUI
{
public:
    int ShowCraftMenu(const std::vector<Recipe>& recipes, Inventory& inv, ItemList& itemlist);
};

