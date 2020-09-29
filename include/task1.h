//
//  task1.hpp
//  cpp_exmp
//
//  Created by Сапожников Андрей Михайлович on 22.09.2020.
//  Copyright © 2020 Сапожников Андрей Михайлович. All rights reserved.
//

#ifndef task1_h
#define task1_h

#include <iostream>
#include <string.h>

struct Person {
    std::string name;
    unsigned int age;
};

//int
int comp1(const void* v1, const void* v2);
//double
int comp2(const void* v1, const void* v2);
//const char value
int comp3(const void* v1, const void* v2);
//const char length
int comp4(const void* v1, const void* v2);
//const char spaces
int comp5(const void* v1, const void* v2);
//person age
int comp6(const void* v1, const void* v2);

#endif /* task1_hpp */
