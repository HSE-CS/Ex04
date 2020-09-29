#include "task1.h"

int comp1(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}


int comp2(const void* a, const void* b) {
 
    if ((*(double*)a - *(double*)b) < 0)
        return  -1;

    else if ((*(double*)a - *(double*)b) > 0)
        return 1;
    
    else 
        return 0;
}


int comp3(const void* a, const void* b) {
    return strcmp(*(const char**)a, *(const char**)b);
}



int comp4(const void* a, const void* b) {
    return strlen(*(const char**)a) - strlen(*(const char**)b);
}


int comp5(const void* a, const void* b) {
    
    int count1 = 0;
    int count2 = 0;

    for (int i = 0; i < strlen(*(const char**)a); i++) {
        if ((*(const char**)a)[i] == ' ') {
            count1 += 1;
        }
    }

    for (int i = 0; i < strlen(*(const char**)b); i++) {
        if ((*(const char**)b)[i] == ' ') {
            count2 += 1;
        }
    }

    return count1 - count2;

}



int comp6(const void* a, const void* b) {

    return (*(Person*)a).age - (*(Person*)b).age;

}