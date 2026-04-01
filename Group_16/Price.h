#pragma once
#include <map>

class Price
{
public:
    Price(int id, int resultMoeny) : itemID(id), Count(resultMoeny) {}

    void AddMoney(int id, int count)
    {
        Money[id] = count;
    }

    const std::map<int, int>& GetMoney() const
    {
        return Money;
    }

    int GetItemID() const
    {
        return itemID;
    }
    int GetCount() const
    {
        return Count;
    }

private:
    std::map<int, int> Money;
    int itemID;
    int Count;
};


