//
//  task1.hpp
//  test1
//
//  Created by Алексей Трутнев on 05.10.2020.
//  Copyright © 2020 Алексей Трутнев. All rights reserved.
//

#ifndef task1_hpp
#define task1_hpp
#include <stdio.h>
#include <cstring>
#include <string>
using namespace std;

struct Person {
    string name;
    unsigned age;
};

int comp1(const void * a, const void * b);
int comp2(const void * a, const void * b);
int comp3(const void * a, const void * b);
int comp4(const void * a, const void * b);
int comp5(const void * a, const void * b);
int comp6(const void * a, const void * b);

#endif /* task1_hpp */
