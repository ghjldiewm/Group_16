#pragma once
#include <string>
class Item
{
public:
    Item() : ID(0), Itemname(""), Value(0) {}

    Item(int id, const std::string& name, int value) : ID(id), Itemname(name), Value(value) {}

    int GetID() const
    {
        return ID;
    }
    const std::string& getItemname() const
    {
        return Itemname;
    }
    int getValue() const
    {
        return Value;
    }

private:
    int ID;
    std::string Itemname;
    int Value;
};

