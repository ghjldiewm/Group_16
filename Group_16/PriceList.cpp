#include "PriceList.h"

void PriceList::GetPriceList()
{
    Price hpPotion(1, 1);
    hpPotion.AddMoney(1,100);
    prices.push_back(hpPotion);

}

const std::vector<Price>& PriceList::GetPrices() const
{
    return prices;
}
