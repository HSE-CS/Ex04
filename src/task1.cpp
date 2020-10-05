//
//  task1.cpp
//  programming-technologies
//
//  Created by Даниил Иванов on 05.10.2020.
//  Copyright © 2020 Daniil Ivanov. All rights reserved.
//

#include "task1.hpp"

int comp1(int* a, int* b)
{
    int c = *a - *b;
    return c;
}

int comp2(double* a, double* b)
{
    if (* a == *b)
        return 0;
    int c = round(*a - *b);
    return c;
}

int comp3(const char** a, const char** b)
{
    int arr_a, arr_b;
    for (int i{ 0 }; i < strlen(*a); i++)
    {
        arr_a = (*a)[i];
        arr_b = (*b)[i];
    }
    return arr_a-arr_b;
}

int comp4(const char** a, const char** b)
{
    int c = strlen(*a) - strlen(*b);
    return c;
}

int comp5(const char** a, const char** b)
{
    int c_a = 0, c_b = 0;
    for (int i = 0; i < strlen(*a); i++)
    {
        if ((*a)[i] == ' ')
            c_a++;
    }
    for (int i = 0; i < strlen(*b); i++)
    {
        if ((*b)[i] == ' ')
            c_b++;
    }
    return c_a-c_b;
}

int comp6(Person* a, Person* b)
{
    return a->age - b->age;
}
