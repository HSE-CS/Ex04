//
//  task1.cpp
//  programming-technologies
//
//  Created by Даниил Иванов on 05.10.2020.
//  Copyright © 2020 Daniil Ivanov. All rights reserved.
//

#include "task1.hpp"

int comp1(const void* a, const void* b)
{
    int c = *(int*)a - *(int*)b;
    return c;
}

int comp2(const void* a, const void* b)
{
    if (* (double*)a == *(double*)b)
        return 0;
    int c = round(*(double*)a - *(double*)b);
    return c;
}

int comp3(const void** a, const void** b)
{
    int arr_a = 0, arr_b = 0;
    for (int i{ 0 }; i < strlen(*(const char**)a); i++)
    {
        arr_a = (*(const char**)a)[i];
        arr_b = (*(const char**)b)[i];
    }
    return arr_a-arr_b;
}

int comp4(const void** a, const void** b)
{
    int c = strlen(*(const char**)a) - strlen(*(const char**)b);
    return c;
}

int comp5(const void** a, const void** b)
{
    int c_a = 0, c_b = 0;
    for (int i = 0; i < strlen(*(const char**)a); i++)
    {
        if ((*(const char**)a)[i] == ' ')
            c_a++;
    }
    for (int i = 0; i < strlen(*(const char**)b); i++)
    {
        if ((*(const char**)b)[i] == ' ')
            c_b++;
    }
    return c_a-c_b;
}

int comp6(const void* a, const void* b)
{
    return (int)((Person*)a)->age - (int)((Person*)b)->age;
}
