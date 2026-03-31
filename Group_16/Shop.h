#pragma once
#include "Inventory.h"
#include "Price.h"
#include "Transaction.h"
#include <iostream>

class Shop
{
public:
    bool BuyItem(Inventory& inv, const Price& price) 
    {
        const std::map<int, int>& prices =price.GetMoney();

        for (std::map<int, int>::const_iterator it = prices.begin(); it != prices.end(); ++it)
        {
            int itemId = it->first;
            int count = it->second;

            if (!inv.HasItem(itemId, count))
            {
                std::cout << "금액 부족!" << std::endl;
                return false;
            }
        }
        for (std::map<int, int>::const_iterator it = prices.begin(); it != prices.end(); ++it)
        {
            int itemId = it->first;
            int count = it->second;
            inv.RemoveItem(it->first, it->second);
        }

        Transaction::BuyItem(inv, price.GetItemID(), price.GetCount());

        std::cout << "구매 성공!" << std::endl;
        return true;
    }
};
