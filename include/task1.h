#pragma once
#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>

struct Person
{
    std::string name;
    unsigned age;
};

int comp1(const void* a, const void* b);

int comp2(const void* a, const void* b);

int comp3(const void* a, const void* b);

int comp4(const void* a, const void* b);

int comp5(const void* a, const void* b);

int comp6(const void* a, const void* b);

