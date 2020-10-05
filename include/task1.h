//
// Created by freeb on 05.10.2020.
//

#include <string>
#include <cstring>
#include <algorithm>
using namespace std;

#ifndef TASK1_TASK1_H
#define TASK1_TASK1_H

struct Person
{
    string name;
    unsigned age;
};

int comp1(const void* a, const void* b);
int comp2(const void* a, const void* b);
int comp3(const void* a, const void* b);
int comp4(const void* a, const void* b);
int comp5(const void* a, const void* b);
int comp6(const void* a, const void* b);

#endif //TASK1_TASK1_H
