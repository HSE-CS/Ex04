#include "task1.h"

#include<algorithm>
#include<math.h>


int comp1(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}
int comp2(const void* a, const void* b) {
    return int((*(double*)b - *(double*)a));
}
int comp3(const void* a, const void* b) {
    return -strcmp((const char*)a, (const char*)b);
}
int comp4(const void* a, const void* b) {
    return -(strlen((const char*)a) - strlen((const char*)b));
}
int comp5(const void* a, const void* b) {
    int count1 = 0, count2 = 0;
    const char* s1 = (const char*)a;
    const char* s2 = (const char*)b;
    for (int i = 0; i < strlen((const char*)a); i++) {
        if (s1[i] == ' ') count1++;
    }
    for (int i = 0; i < strlen((const char*)b); i++) {
        if (s2[i] == ' ') count2++;
    }
    return -count1 + count2;
}
int comp6(const void* a, const void* b) {
    Person* p1 = (Person*)a;
    Person* p2 = (Person*)b;
    return p1->age-p2->age;
}