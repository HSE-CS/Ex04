#include <iostream>
#include <cstdlib>
#include <string>
struct Person
{
    std::string  name;
    unsigned age;
};
int comp1(int first,int second);
int comp2(double first,double second);
int comp3(const char *first,const char *second);
int comp4(const char *first,const char *second);
int comp5(const char *first,const char *second);
int comp6(Person *first,Person *second);
