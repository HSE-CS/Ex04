#include "task1.h"
#include <algorithm>
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int comp1(const void* a, const void* b) {
	return *(int*)a - *(int*)b;
}
int comp2(const void* a, const void* b) {
    if (*(double*)a < *(double*)b) {
        return -1;
    }
    else if (*(double*)a > * (double*)b) {
        return 1;
    }
    else {
        return 0;
    }
}

int comp3(const void* a, const void* b) {
    return strcmp(*(const char**)a, *(const char**)b);
}
int comp4(const void* a, const void* b) {
    string str1 = *(const char**)a;
    string str2 = *(const char**)b;
    if (str1.length() < str2.length() ) {
        return -1;
    }
    else if (str1.length() > str2.length()) {
        return 1;
    }
    else {
        return 0;
    }
}
int comp5(const void* a, const void* b) {
    string str1 = *(const char**)a;
    string str2 = *(const char**)b;
    int res = count(str1.begin(), str1.end(), ' ') - count(str2.begin(), str2.end(), ' ');
    if (res > 0) {
        return 1;
    }
    else if (res < 0) {
        return -1;
    }
    else {
        return 0;
    }
}
int comp6(const void* a, const void* b) {

    return (((Person*)a)->age - ((Person*)b)->age);
}