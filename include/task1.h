#ifndef COMP_H
#define COMP_H

using namespace std;
#include <string.h>
#include <iostream>

struct Person
{
    string  name;
    unsigned age;
};

int comp1(const void* a, const void* b);
int comp2(const void* a, const void* b);
int comp3(const void* a, const void* b);
int comp4(const void* a, const void* b);
int comp5(const void* a, const void* b);
int comp6(const void* a, const void* b);


#endif // !COMP_H

