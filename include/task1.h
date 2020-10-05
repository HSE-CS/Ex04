#ifndef TASK1.H
#define TASK1.H
#include <string>
using namespace std;

struct Person {
	string name;
	unsigned int age;
};
int comp1(int a, int b);
int comp2(double a, double b);
int comp3(const char* s1, const char* s2);
int comp4(const char* s1, const char* s2);
int comp5(const char* s1, const char* s2);
int comp6(const Person& p1, const Person& p2);

#endif
