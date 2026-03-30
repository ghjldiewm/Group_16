#include "Itemlist.h"

void ItemList::GetItemList()
{
    Itemlist[1] = Item(1, "HP포션", 50);
    Itemlist[2] = Item(2, "포션", 50);
   
}
const Item* ItemList::getItemID(int ID) const
{
    std::map<int, Item>::const_iterator it = Itemlist.find(ID);
    if (it != Itemlist.end())
    {
        return &it->second;
    }

    return nullptr;
}
