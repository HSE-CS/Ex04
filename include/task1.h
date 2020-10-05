#ifndef task1_H
#define task1_H
#include <iostream>

const size_t LARGE_SIZE = 100000;

struct rnd {
    int operator()() {
        return rand() % LARGE_SIZE;
    }
};



int comp(const void* a, const void* b);
#endif