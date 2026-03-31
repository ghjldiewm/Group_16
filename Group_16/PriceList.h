#pragma once
#include "Price.h"
#include <vector>

class PriceList
{
public:
    void GetPriceList();
    const std::vector<Price>& GetPrices() const;

private:
    std::vector<Price> prices;
};
