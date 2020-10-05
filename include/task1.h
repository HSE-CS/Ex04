#include <string>
using namespace std;


struct Person
{
    string   name;
    unsigned age;
};

int comp1(const void *p, const void *q);
int comp2(const void *p, const void *q);
int comp3(const void *p, const void *q);
int comp4(const void *p, const void *q);
int comp5(const void *p, const void *q);
int comp6(const void *p, const void *q);