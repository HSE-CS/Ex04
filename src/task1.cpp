//
// Created by stoja on 29.09.2020.
//

#include <iostream>

int comp1(const void* a, const void* b){
    return ( *(int*)a - *(int*)b);
}
