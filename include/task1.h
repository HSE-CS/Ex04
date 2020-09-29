//
// Created by sharg on 29.09.2020.
//

#ifndef TASK1_TASK1_H
#define TASK1_TASK1_H
#include <algorithm>
#include <iostream>
#include <cstring>
using namespace std;

struct Person
{
    string name;
    unsigned age;
};
bool comp1(int first,int second);
bool comp2(double first,double second);
bool comp3(const char *first,const char *second);
bool comp4(const char *first,const char *second);
bool comp5(const char *first,const char *second);
bool comp6(Person*first,Person *second);
#endif //TASK1_TASK1_H
