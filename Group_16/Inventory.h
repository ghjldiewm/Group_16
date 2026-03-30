#pragma once
#include <map>
#include "ItemList.h"


class Inventory
{
public:
   ~Inventory() = default;

    void AddItem(int id, int count);
    void RemoveItem(int id, int count);

    int GetItemCount(int id)const;
    bool HasItem(int id, int count)const;

    void PrintAllItems(const ItemList& itemlist) const;
private:
    std::map<int, int> items;
};

