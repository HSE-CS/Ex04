#include <iostream>

using namespace std;

typedef struct Person
{
    string   name;
    unsigned age;
}
person;

int comp1(const int a, const int b);
int comp2(const double a, const double b);
int comp3(const char* a, const char* b);
int comp4(const char* a, const char* b);
int comp5(const char* a, const char* b);
int comp6(const void* a, const void* b);

