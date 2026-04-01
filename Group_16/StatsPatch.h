#pragma once
#include <optional>

struct StatsPatch
{
    std::optional<int> HP;
    std::optional<int> MaxHP;

    std::optional<int> MP;
    std::optional<int> MaxMP;

    std::optional<int> Attack;

    std::optional<int> Defense;

    std::optional<int> Speed;

    std::optional<int> Crit;

    std::optional<int> Exp;

    std::optional<int> Level;
};
