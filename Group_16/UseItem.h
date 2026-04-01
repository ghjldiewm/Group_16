#pragma once
#include "Item.h"

class UseItem : public Item
{
 public:
     UseItem(int id, std::string name, int value)
            :Item(id,name, value)
     {}
};

