#include <algorithm>
#include <iostream>
#include <cstring>
//#include <stdlib>
#include "../include/task1.h"
using namespace std;

int comp1(const void * a, const void * b){
    return ( *( int* )a - *( int* )b );
}
int comp2(double *a, double *b){
  //  return a - b;
    if (*a-*b>0.0)
        return 1;
    else
        return -1;
}
int comp3(const char* a, const char* b){
    return strcmp(a, b);
}
int comp4(const char* a, const char* b){
    return strlen(a) - strlen(b);
}
int comp5(const char* a, const char* b){
    string str1(a);
    string str2(b);
    return count(str1.begin(), str1.end(), ' ') - count(str2.begin(), str2.end(), ' ') ;
}
int comp6(const void* a, const void* b) {

    return (((struct Person*)a)->age - ((struct Person*)b)->age);
}



