#ifndef TASK1.H
//#define TASK1.H
#include <string>
using namespace std;

struct Person {
	string name;
	unsigned int age;
};
int comp1(const void* a, const void* b);
double comp2(const void* a, const void* b);
const char* comp3(const void* s1_n, const void* s2_n);
const char* comp4(const void* s1_n, const void* s2_n);
const char* comp5(const void* s1_n, const void* s2_n);
int comp6(const void* p1_n, const void* p2_n);

#endif