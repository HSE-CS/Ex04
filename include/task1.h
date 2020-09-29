#ifndef COMPARE_H
#define COMPARE_H
#include <string.h>
using namespace std;

struct Person
{
    string name;
    unsigned age;
};

int comp1(const void* one, const void* two);
int comp2(const void* one, const void* two);
int comp3(const void* one, const void* two);
int comp4(const void* one, const void* two);
int comp5(const void* one, const void* two);
int comp6(const void* one, const void* two);

#endif