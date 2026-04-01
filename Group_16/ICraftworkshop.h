#pragma once
class Inventory;
class Recipe;

class ICraftworkshop
{
public:
    virtual ~ICraftworkshop() = default;

    virtual bool CraftItem(Inventory& inv, const Recipe& recipe) = 0;

};

