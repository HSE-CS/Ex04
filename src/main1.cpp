//
//  main.cpp
//  test1
//
//  Created by Алексей Трутнев on 05.10.2020.
//  Copyright © 2020 Алексей Трутнев. All rights reserved.
//
#include <iostream>
#include "task1.hpp"
#include <cstring>
#include <string.h>

using namespace std;

const size_t LARGE_SIZE = 500000;

struct rnd {
    int operator()() {
        return rand() % LARGE_SIZE;
    }
};

int main() {
    return 0;
}
