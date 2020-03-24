/*
** EPITECH PROJECT, 2020
** 106bombyx_2019
** File description:
** calc
*/

#pragma once

#ifndef CALC_HPP_
#define CALC_HPP_

#include <stdlib.h>

class Calc {
    public:
        void Do(size_t iterations, float rate);
        void Do(size_t iterations, float rate, size_t init, size_t final);
};

#endif /* !CALC_HPP_ */