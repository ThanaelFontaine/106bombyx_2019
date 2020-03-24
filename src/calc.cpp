/*
** EPITECH PROJECT, 2020
** 106bombyx_2019
** File description:
** calc
*/

#include <stdio.h>
#include "calc.hpp"

void Calc::Do(size_t iterations, float rate)
{
    float res = iterations;

    for (size_t i = 1; i <= 100; i++) {
        printf("%d %.2f\n", i, res);
        res = rate * res * ((1000 - res) / 1000);
    }
}

void Calc::Do(size_t iterations, float rate, size_t init, size_t final)
{

}