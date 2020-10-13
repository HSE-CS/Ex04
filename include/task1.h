//
// Created by jmax on 13.10.2020.
//

#ifndef EX_04_TASK1_H
#define EX_04_TASK1_H

#include <string>

struct Person {
    std::string name;
    unsigned age;
};
int comp1(const void* a, const void* b);
int comp2(const void* a, const void* b);
int comp3(const void* a, const void* b);
int comp4(const char* a, const char* b);
int comp5(const char* a, const char* b);
int comp6(Person a, Person b);
#endif //EX_04_TASK1_H
