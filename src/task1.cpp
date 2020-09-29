#include "task1.h"
#include <iostream>
#include <string>
#include <cmath>

int comp1(const void* a, const void* b){
    return (*(int*)a == *(int*)b ? 0 : (*(int*)a < *(int*)b ? -1 : 1));
}

int comp2(const void* a, const void* b){
    return (abs(*(double*)a - *(double*)b) < eps ? 0 : (*(double*)a < *(double*)b ? -1 : 1));
}

int comp3(const void* a, const void* b){
    return strcmp(*(const char**)a, *(const char**)b);
}

int comp4(const void* a, const void* b){
    return (strlen(*(const char**)a) - strlen(*(const char**)b));
}

int comp5(const void* a, const void* b){
    int count_a = 0, count_b = 0;
    char* a_str = *(char**)a;
    char* b_str = *(char**)b;
    for(int i = 0; i < strlen(a_str); i++) count_a += (a_str[i] == ' ');
    for(int i = 0; i < strlen(b_str); i++) count_b += (b_str[i] == ' ');
    return (count_a == count_b ? 0 : (count_a < count_b ? -1 : 1));
}

int comp6(const void* a, const void* b){
    return ((*(Person*)a).age - (*(Person*)b).age);
}
