#ifndef TASK1_H
#define TASK1_H

#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstdlib>
#include <ctime>

const size_t LARGE_SIZE = 1000000;

int comp1(const void* a, const void* b);

struct Person
{
    string name;
    unsigned age;
}


struct rnd
{
    int operator()()
    {
        return rand() % LARGE_SIZE;
    }
};

#endif