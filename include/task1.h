#ifndef COMPARE_H
#define COMPARE_H
#include <string>
using namespace std;

struct Person
{
    string name;
    unsigned age;
};

int comp1(int one, int two);
int comp2(double one, double two);
int comp3(const char* one, const char* two);
int comp4(const char* one, const char* two);
int comp5(const char* one, const char* two);
int comp6(Person one, Person two);

#endif