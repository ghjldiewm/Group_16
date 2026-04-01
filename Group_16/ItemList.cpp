#include "Itemlist.h"

void ItemList::GetItemList()
{
    Itemlist[1] = Item(1, "돈", 1);
    Itemlist[2] = Item(2, "HP포션", 50);
    Itemlist[3] = Item(3, "MP 포션", 50);
    Itemlist[4] = Item(4, "강화 포션", 20);
    Itemlist[5] = Item(5, "치명타 포션", 10);
    Itemlist[6] = Item(6, "강철검", 100);
    Itemlist[7] = Item(7, "수호의 돌", 1004);
    Itemlist[8] = Item(8, "강철 판금 갑옷", 250);
    Itemlist[9] = Item(9, "C++ 전공 서적", 400);
    Itemlist[10] = Item(10, "두쫀쿠", 400);

    Itemlist[101] = Item(101, "나뭇가지", 1);
    Itemlist[102] = Item(102, "단단한 돌", 1);
    Itemlist[103] = Item(103, "커다란 나뭇잎", 1);
    Itemlist[104] = Item(104, "약초", 1);
    Itemlist[105] = Item(105, "끈적이는 거미줄", 1);
    Itemlist[106] = Item(106, "깃털", 1);
    Itemlist[107] = Item(107, "슬라임 점액", 1);
    Itemlist[108] = Item(108, "박쥐 이빨", 1);
   
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
