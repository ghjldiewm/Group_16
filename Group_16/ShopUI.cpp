#include "ShopUI.h"
#include "Price.h"
#include <iostream>

int ShopUI::ShowShopMenu(const std::vector<Price>& prices, Inventory& inv, ItemList& itemlist)
{
    int Shopchoice;

    std::cout << "=== 상점 ===" << std::endl;

    for (int i = 0; i < prices.size(); i++)
    {
        const Price& price = prices[i];
        const Item* Items = itemlist.getItemID(price.GetItemID());

        std::cout << i + 1 << ". ";

        if (Items != nullptr)
        {
            std::cout << Items->getItemname() << " x" << price.GetCount();
        }

        std::cout << " (가격: ";

        const std::map<int, int>& money = price.GetMoney();

        for (std::map<int, int>::const_iterator it = money.begin(); it != money.end(); ++it)
        {
            const Item* getItem = itemlist.getItemID(it->first);

            if (getItem)
            {
                std::cout << getItem->getItemname() << " x" << it->second << " ";
            }
        }

        std::cout << ")";

        bool canBuy = true;
        for (std::map<int, int>::const_iterator it2 = money.begin(); it2 != money.end(); ++it2)
        {
            if (!inv.HasItem(it2->first, it2->second))
            {
                canBuy = false;
                break;
            }
        }

        if (!canBuy)
        {
            std::cout << " [금액 부족]";
        }

        std::cout << std::endl;
    }
    std::cout << "0. 나가기" << std::endl;
    std::cout << "선택: ";
    std::cin >> Shopchoice;

    return Shopchoice;
}  
