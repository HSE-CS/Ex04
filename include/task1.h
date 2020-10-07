#ifndef TASK1_H
#define TASK1_H

#include <iostream>
#include <cstring>
#include <string>
using namespace std;

struct Person{
    string name;
    unsigned age;
};

int comp1(const void* first, const void* second);
int comp2(const void* first, const void* second);
int comp3(const void* first, const void* second);
int comp4(const void* first, const void* second);
int comp5(const void* first, const void* second);
int comp6(const void* first, const void* second);

#endif 