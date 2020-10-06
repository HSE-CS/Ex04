#ifndef TASK1.H
#define TASK1.H
#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>
using namespace std;

struct Person {
	string name;
	unsigned int age;
};

int comp1(const void* a, const void* b);
int comp2(const void* a, const void* b);
int comp3(const void* s1_n, const void* s2_n);
int comp4(const void* s1_n, const void* s2_n);
int comp5(const void* s1_n, const void* s2_n);
int comp6(const void* p1_n, const void* p2_n);

#endif
