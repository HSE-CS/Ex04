#include <string>
#include <algorithm>
#pragma once

using namespace std;

typedef struct Person
{
    std::string name;
    unsigned    age;
}
person;


int comp1(const void* a, const void* b) {
    return *(int*)a - *(int*)b;
}

int comp2(const void* a, const void* b) {
    return int (*(double*)a - *(double *)b);
}

int comp3(const void* a, const void* b) {
    for (int i = 0; ((char*)a + i) == nullptr || ((char*)b+ i) == nullptr; i++) {
        if (*((char*)a + i) == *((char*)b + i)) {
            continue;
        }
        return *(char*)a - *(char*)b;
    }
    return 0;
}

int comp4(const void* a, const void* b) {
    return strlen((char*)a) - strlen((char*)b);
}

int comp5(const void* a, const void* b) {
    std::string str1((char*)a);
    std::string str2((char*)b);
    return std::count(str1.begin(), str2.end(), ' ') - count(str2.begin(), str2.end(), ' ');
}

int comp6(const void* a, const void* b) {
    return ((person*)a) -> age - ((person*)b) -> age;
}

