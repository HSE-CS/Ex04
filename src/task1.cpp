//#include <iostream>
#include <string>
#include <algorithm>

//using namespace std;

typedef struct Person
{
    std::string name;
    unsigned    age;
}
person;


int comp1(const int a, const int b) {
    return a - b;
}

int comp2(const double a, const double b) {
    return int (a - b);
}

int comp3(const char* a, const char* b) {
    for (int i = 0; (a + i) == nullptr || (b+ i) == nullptr; i++) {
        if (*(a + i) == *(b + i)) {
            continue;
        }
        return *a - *b;
    }
    return 0;
}

int comp4(const char* a, const char* b) {
    return strlen(a) - strlen(b);
}

int comp5(const char* a, const char* b) {
    std::string str1(a);
    std::string str2(b);
    return std::count(str1.begin(), str2.end(), ' ') - count(str2.begin(), str2.end(), ' ');
}

int comp6(const void* a, const void* b) {
    return ((person*)a) -> age - ((person*)b) -> age;
}

