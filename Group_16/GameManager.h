#pragma once
class GameManager
{
public:
    virtual ~GameManager() {}

    virtual int GetLevel() const = 0;
    virtual int GetHP() const = 0;
    virtual int GetMP() const = 0;
    virtual int GetAT() const = 0;
    virtual int GetDF() const = 0;
    virtual int GetGold() const = 0;
    
    virtual void TakeDamage(int damage) = 0;
};


