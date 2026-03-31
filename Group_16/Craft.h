#pragma once
#include "Inventory.h"

class Craft
{
public:
    static void CreateItem(Inventory& inv, int id, int count)
    {
        inv.AddItem(id, count);
    }
};
