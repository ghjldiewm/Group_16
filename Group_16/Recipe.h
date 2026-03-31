#pragma once
#include <map>

class Recipe
{
public:
    Recipe(int resultID, int resultCount) : ID(resultID), Count(resultCount) {}

    void AddIngredient(int id, int count)
    {
        ingredients[id] = count;
    }

    const std::map<int, int>& GetIngredients() const
    {
        return ingredients;
    }

    int GetResultID() const
    {
        return ID;
    }
    int GetResultCount() const
    {
        return Count;
    }

private:
    std::map<int, int> ingredients;
    int ID;
    int Count;
};
