#pragma once
#include "Item.h"
#include <map>

class ItemList
{
public:
    void GetItemList();
    const Item* getItemID(int ID) const;

private:
    std::map<int, Item> Itemlist;
};

