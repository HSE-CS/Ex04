//
// Created by islam on 15.09.2020.
//

#ifndef WORK_TASK1_H
#define WORK_TASK1_H

#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>

using namespace std;

const size_t LARGE_SIZE = 1000000;

struct rnd {
    int operator()() {
        return rand() % LARGE_SIZE;
    }
};

int comp1(const void *a, const void *b);
int comp2(const void *a, const void *b);
int comp3(const void *a, const void *b);
int comp4(const void *a, const void *b);
int comp5(const void *a, const void *b);
int comp6(const void *a, const void *b);

int comp( const void* a, const void* b );

#endif //WORK_TASK1_H
