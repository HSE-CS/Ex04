#ifndef EX04_TASK1_H
#define EX04_TASK1_H

#include <string>
#include <string.h>
#include "math.h"
struct Person
{
    std::string   name;
    unsigned age;
};

int spnum(const char* s);

int comp1 (const void* a, const void* b);
int comp2 (const void* a, const void* b);
int comp3 (const void* a, const void* b);
int comp4 (const void* a, const void* b);
int comp5 (const void* a, const void* b);
int comp6 (const void* a, const void* b);

#endif //EX04_TASK1_H
