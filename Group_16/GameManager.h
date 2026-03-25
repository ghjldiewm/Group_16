#pragma once
class GameManager
{
public:
    virtual ~GameManager() {}
    virtual void TakeDamage(int damage) = 0;
};


