#include "CraftUI.h"
#include "Recipe.h" 
#include "Inventory.h"
#include <iostream>


int CraftUI::ShowCraftMenu(const std::vector<Recipe>& recipes, Inventory& inv, ItemList& itemlist)
{
    int Craftchoice;

    std::cout << "=== 제작소 ===" << std::endl;

    for (int i = 0; i < recipes.size(); i++)
    {
        const Recipe& recipe = recipes[i];

        const Item* resultItem = itemlist.getItemID(recipe.GetResultID());

        std::cout << i + 1 << ". ";

        if (resultItem)
            std::cout << resultItem->getItemname() << " : ";
        else
            std::cout << "알 수 없는 아이템 : ";

        for (const auto& made : recipe.GetIngredients())
        {
            const Item* madeItem = itemlist.getItemID(made.first);

            if (madeItem)
            {
                std::cout << madeItem->getItemname() << " x" << made.second << " ";
            }
            else
            {
                std::cout << "[없는 아이템ID:" << made.first << "] ";
            }
        }

        bool canCraft = true;
        for (const auto& made : recipe.GetIngredients())
        {
            if (!inv.HasItem(made.first, made.second))
            {
                canCraft = false;
                break;
            }
        }

        if (!canCraft)
        {
            std::cout << " [재료 부족]";
        }

        std::cout << std::endl;
    }
    
    std::cout << "0. 나가기" << std::endl;
    std::cout << "선택: " << std::endl;
    std::cin >> Craftchoice;

    return Craftchoice;
}
