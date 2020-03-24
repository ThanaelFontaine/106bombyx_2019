/*
** EPITECH PROJECT, 2020
** 106bombyx_2019
** File description:
** error
*/

#include <stdlib.h>
#include "error.hpp"

using namespace std;

bool Error::IsNumber(char *str)
{
    for (auto i = 0; str[i]; i++) {
        auto c = str[i];
        if ((c >= '0' && c <= '9') || c == '.')
            continue;
        else
            return false;
    }

    return true;
}