//
// Created by stoja on 29.09.2020.
//

#include <iostream>
#include <cstring>

int comp1(const void* a, const void* b){
    return ( *(int*)a - *(int*)b);
}

int comp2(const void* a, const void* b) {
    if (*(double*) a >= *(double*) b) return 1;
    return -1;
}

int comp3(const void* a, const void* b){
    return strcmp(*(const char**)a, *(const char**)b);
}

int comp4(const void* a, const void* b){

}

int comp5(const void* a, const void* b){

}

int comp6(const void* a, const void* b){

}