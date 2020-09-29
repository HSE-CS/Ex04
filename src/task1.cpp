#include "task1.h"

int comp1(const void* p1, const void* p2) {
    return (*(int*)p1 - *(int*)p2);
}

int comp2(const void* p1, const void* p2)
{
    double tmp = *(double*)p1 - *(double*)p2;
    if (tmp > 0.0)
        return 1;
    else if (tmp < 0.0)
        return -1;
    return 0;
}
int comp3(const void* p1, const void* p2) {
    return strcmp(*((const char**)p1), *((const char**)p2));
}

int comp4(const void* p1, const void* p2) {
    return (strlen(*((const char**)p1)) - strlen(*((const char**)p2)));
}

int comp5(const void* p1, const void* p2)
{
    unsigned int counter1 = 0, counter2 = 0;
    for (unsigned int i = 0; i < strlen(*(const char**)p1); i++)
        if ((*(const char**)p1)[i] == ' ')
            counter1++;
    for (unsigned int i = 0; i < strlen(*(const char**)p2); i++)
        if ((*(const char**)p2)[i] == ' ')
            counter2++;
    return counter1 - counter2;
}

int comp6(const void* p1, const void* p2)
{
    return ((Person*)p1)->age - ((Person*)p2)->age;
}
