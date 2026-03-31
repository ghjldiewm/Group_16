#pragma once
#include "Player.h"
#include "Inventory.h"
#include "ItemList.h"
#include "Item.h"

class UseItemSystem
{
public:
    void Useitemsystem(Player& player, Inventory& inventory, ItemList& itemlist, int id, int count)
    {
    if (inventory.GetItemCount(id) < count)
    {
        std::cout << "아이템이 부족합니다." << std::endl;
        return;
    }
    const Item* item = itemlist.getItemID(id);

    if (item == nullptr)
    {
        std::cout << "아이템이 존재하지 않습니다."<< std::endl;
        return;   
    }
    item->Use(player);

    inventory.RemoveItem(id, count);
    }
};

