#include <iostream>
#include <cstdlib>
#include <string>
struct Person
{
    std::string  name;
    unsigned age;
};
bool comp1(int first,int second);
bool comp2(double first,double second);
bool comp3(const char *first,const char *second);
bool comp4(const char *first,const char *second);
bool comp5(const char *first,const char *second);
bool comp6(Person *first,Person *second);
