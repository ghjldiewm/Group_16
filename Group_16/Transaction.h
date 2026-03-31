#pragma once
#include "Inventory.h"

class Transaction
{
public:
    static void BuyItem(Inventory& inv, int id, int count)
    {
        inv.AddItem(id, count);
    }
};

