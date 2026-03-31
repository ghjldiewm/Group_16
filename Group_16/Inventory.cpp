#include "Inventory.h"
#include <iostream>

class Item;

void Inventory::AddItem(int id, int count)
{
    items[id] += count;
}
void Inventory::RemoveItem(int id, int count)
{
    std::map<int, int>::const_iterator it = items.find(id);
    if (it != items.end())
    {
        items[id] -= count;
        if (items[id] <= 0)
        {
            items.erase(id);
        }
    }
}
int Inventory::GetItemCount(int id)const
{
    std::map<int, int>::const_iterator it = items.find(id);
    if (it != items.end())
    {
        return it->second;
    }
}
bool Inventory::HasItem(int id, int count)const
{
    return GetItemCount(id) >= count;
}
void Inventory::PrintAllItems(const ItemList& itemlist) const
{
    std::cout << "=== 인벤토리 ===" << std::endl;
    if (items.empty())
    {
        std::cout << "아이템이 없습니다." << std::endl;
        return;
    }

    for (std::map<int, int>::const_iterator it = items.begin(); it != items.end(); ++it)
    {
        int id = it->first;
        int count = it->second;

        const Item* item = itemlist.getItemID(id);

        std::cout << item->getItemname() << ":" << count<< std::endl;
    }
}
bool Inventory::IsEmpty() const
{
    return items.empty();
}
