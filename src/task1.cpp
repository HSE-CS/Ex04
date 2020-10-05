#include "task1.h"

#include<algorithm>
#include<math.h>


int comp1(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}
int comp2(const void* a, const void* b) {
    return (*(double*)a - *(double*)b) > 0.0 ? 1 : -1;
}
int comp3(const void* a, const void* b) {
    return strcmp(*((char**)a), *((char**)b));;
}
int comp4(const void* a, const void* b) {
    return (strlen(*((char**)a)) - strlen(*((char**)b)));
}
int comp5(const void* a, const void* b) {
    int count1 = 0;
    int count2 = 0;
    for (unsigned int i = 0; i < strlen(*((char**)a)); i++)
        if ((*((char**)a))[i] == ' ')
            count1++;
    for (unsigned int i = 0; i < strlen(*(char**)b); i++)
        if ((*((char**)b))[i] == ' ')
            count2++;
    return count1 - count2;
}
int comp6(const void* a, const void* b) {
    Person* p1 = (Person*)a;
    Person* p2 = (Person*)b;
    return p1->age-p2->age;
}