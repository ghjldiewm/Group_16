#pragma once
#include <iostream>
#include <string.h>
#include "Item.h"

class Twig : public Item {
public:
    Twig(int count) : Item(6, "나뭇가지", 1), m_count(count) {}

    int GetCount() const { return m_count; }
private:
    int m_count;
};

class Stone : public Item {
public:
    Stone(int quality) : Item(7, "단단한 돌", 2), m_quality(quality) {}
private:
    int m_quality;
};

class Leaf : public Item {
public:
    Leaf() : Item(8, "커다란 나뭇잎", 1) {}
};

class Herb : public Item {
public:
    Herb(std::string color) : Item(9, "약초", 10), m_color(color) {}
private:
    std::string m_color;
};
