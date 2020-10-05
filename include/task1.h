#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>

using namespace std;

struct Person
{
    string   name;
    unsigned age;
};

int comp6(const void* a, const void* b);