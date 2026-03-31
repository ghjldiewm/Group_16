#pragma once
#include <string>
#include <iostream>

class Player;

class Item
{
public:
    Item(int id, const std::string& name, int value) : ID(id), Itemname(name), Value(value) {}

    virtual ~Item() = default;

    virtual void Use(Player& player) const
    {
        std::cout << "사용할 수 없는 아이템입니다." << std::endl;;
    }

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

