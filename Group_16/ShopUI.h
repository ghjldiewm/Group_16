#pragma once
#include "Price.h"
#include "Inventory.h"
#include "Pricelist.h"
#include <vector>

class ShopUI
{
public:
    int ShowShopMenu(const std::vector<Price>& prices, Inventory& inv, ItemList& itemlist);
};

