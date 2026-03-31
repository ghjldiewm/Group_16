#pragma once
#include <iostream>
#include <string>
#include "UseItem.h"

class Twig : public UseItem {
public:
    Twig()
        : UseItem(101, "나뭇가지", 1)
    {}
};

class Stone : public UseItem {
public:
    Stone()
        : UseItem(102, "단단한 돌", 1)
    {}
};

class Leaf : public UseItem {
public:
    Leaf()
        : UseItem(103, "커다란 나뭇잎", 1)
    {}
};

class Herb : public UseItem {
public:
    Herb()
        : UseItem(104, "약초", 1)
    {}
};

class SpiderWeb : public UseItem {
public:
    SpiderWeb()
        : UseItem(105, "끈적이는 거미줄", 1)
    {}
};

class Feather : public UseItem {
public:
    Feather()
        : UseItem(106, "깃털", 1)
    {}
};

class SlimeOoze : public UseItem {
public:
    SlimeOoze()
        : UseItem(107, "슬라임 점액", 1)
    {}
};

class BatTooth : public UseItem {
public:
    BatTooth()
        : UseItem(108, "박쥐 이빨", 1)
    {}
};
