#include <iostream>
#include <algorithm>
#include <string>
#include <string.h>

using namespace std;

struct Person
{
    string   name;
    unsigned age;
};

bool comp1 (int a, int b) {
    return a < b;
}

bool comp2 (double a, double b) {
    return a < b;
}
bool comp3 (const char* a, const char* b) {
    return a < b;
}
bool comp4 (const char* a, const char* b) {
    return sizeof(a) < sizeof(b);
}

int space_count(const char* s){
    int count = 0;
    char* p = s;
    while( (p = strchr(p, ' ')) ) ++count, ++p;
    return count;
}

bool comp5 (const char* a, const char* b) {
    return space_count(a) < space_count(b);
}
bool comp6 (const struct Person& a, const struct Person& b) {
    return a.age < b.age;
}
