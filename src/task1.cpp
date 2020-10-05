//
//  task1.cpp
//  test1
//
//  Created by Алексей Трутнев on 05.10.2020.
//  Copyright © 2020 Алексей Трутнев. All rights reserved.
//

#include "task1.h"
#include <cstring>
#include <string.h>


int comp1( const void* a, const void* b ) {
    return (*(int *)a - *(int *)b);
}

int comp2(const void *a, const void *b) {
    double eps = 1e-5;
    if (fabs( *(double *) a - *(double *) b) < eps) return 0;
    else if ( *(double *) a - *(double *) b > eps) return 1;
    else return -1;
}

int comp3(const void * a, const void * b){
    return strcmp((const char *)a, (const char *)b);
}

int comp4(const void * a, const void * b){
    return (int)(strlen((const char* )a) - strlen((const char* )b));
}

int comp5(const void * a, const void * b){
    int h = {0};
    int k = {0};
    const char* s1 = (const char* )a;
    const char* s2 = (const char* )b;
    for (int i = 0; i < strlen((const char* )a); i++)   if (s1[i] == ' ') h++;
    for (int i = 0; i < strlen((const char* )b); i++)   if (s2[i] == ' ') k++;
    return (h - k);
}

int comp6(const void *a, const void *b) {
    return (int) (((Person *) a) ->age - ((Person *) b) ->age);
}
