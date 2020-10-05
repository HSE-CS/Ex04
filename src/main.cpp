//
//  main.cpp
//  programming-technologies
//
//  Created by Даниил Иванов on 05.10.2020.
//  Copyright © 2020 Daniil Ivanov. All rights reserved.
//

#include <stdio.h>
#include "task1.hpp"
#include <iostream>
using namespace std;


int main() {
    Person a{ "a", 20 }, b{ "b", 40 };
    cout << comp6(&a, &b) << endl;
}

