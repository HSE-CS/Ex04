#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <fstream>
#include "../include/task1.h"
using namespace std; 
struct Person
{
    string   name;
    unsigned age;
}

bool comp1 (int a, int b){
    return a > b;
}
bool comp2 (double a, double b){
    return a > b;
}
bool comp3 (const char* a, const char* b){
    return a > b;
}
bool comp4 (const char* a, const char* b){
    return a.length() > b.length();
}
bool comp5 (const char* a, const char* b){
    return count(a.begin(), a.end(), ' ') > count(b.begin(), b.end(), ' ');
}
bool comp6 (struct Person a, struct Person b){
    return a.age > b.age;
}