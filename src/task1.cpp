//#include "task1.h"
#include <cstring>
#include "../include/task1.h"
using namespace std;

int comp1(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int comp2(const void* a, const void* b) {
    if ((*(double*)a - *(double*)b) < 0)
        return -1;
    else if ((*(double*)a - *(double*)b) == 0)
        return 0;
    return 1;
    //return (*(double*)a - *(double*)b);
}

int comp3(const void* a, const void* b)
{
    char* a1 = *((char**)a);
    //auto ucharptr = static_cast<const unsigned char*>(a);
    //unsigned char* test = const_cast<unsigned char*>(ucharptr);
    const char* b1 = *((const char**)b);

    size_t i = 0;
    while (a1[i] != '\0')
    {
        if (b1[i] == '\0')
            return 1;
        if (a1[i] > b1[i])
            return 1;
        if (a1[i] < b1[i])
            return -1;
        i++;
    }

    return 0;
}

int comp4(const void* a, const void* b)
{
    const char* a1 = *((const char**)a);
    const char* b1 = *((const char**)b);

    return (strlen(a1) - strlen(b1));

    return 0;
}

int comp5(const void* a, const void* b)
{
    const char* a1 = *((const char**)a);
    const char* b1 = *((const char**)b);

    size_t a2 = 0;
    size_t b2 = 0;
    for (size_t i = 0; i < strlen(a1); ++i)
        if (a1[i] == ' ') a2++;

    for (size_t i = 0; i < strlen(b1); ++i)
        if (b1[i] == ' ') b2++;
    return a2 - b2;

}

int comp6(const void* a, const void* b)
{
    Person* a1 = (Person*)a;
    Person* b1 = (Person*)b;
    return a1->age - b1->age;
}