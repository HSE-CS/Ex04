#include <string.h>
#include <iostream>

using namespace std;

struct Person
{
    string name;
    unsigned age;
};

int comp1(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int comp2(const void* a, const void* b) {
    double ans = *(double*)a - *(double*)b;
    if (ans > 0)
        return 1;
    else if (ans < 0)
        return -1;
    return 0;
}

int comp3(const void* a, const void* b) {
    return (strcmp(*(const char**)a, *(const char**)b));
}

int comp4(const void* a, const void* b) {
    return (strlen(*(char**)a) - strlen(*(char**)b));
}

int comp5(const void* a, const void* b) {
    int size1 = 0, size2 = 0;
    char* arr1 = *(char**)a;
    for (int i = 0; i < strlen((char*)a); i++) {
        if (arr1[i] == ' ')
            size1++;
    }
    arr1 = *(char**)b;
    for (int i = 0; i < strlen((char*)b); i++) {
        if (arr1[i] == ' ')
            size2++;
    }
    return (size1 - size2);
}

int comp6(const void* a, const void* b) {
  
    return (((struct Person*)a)->age - ((struct Person*)b)->age);
}
