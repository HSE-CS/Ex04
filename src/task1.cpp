//
//  task1.cpp
//  cpp_exmp
//
//  Created by Сапожников Андрей Михайлович on 22.09.2020.
//  Copyright © 2020 Сапожников Андрей Михайлович. All rights reserved.
//

#include "task1.h"


int comp1( const void* v1, const void* v2) {
    return ( *( int* )v1 - *( int* )v2);
}

int comp2( const void* v1, const void* v2) {
    double result = (*( double* )v1 - *( double* )v2);
    if (result > 0.0)
        return 1;
    else if (result < 0.0)
        return -1;
    else
        return 0;
}

int comp3( const void* v1, const void* v2) {
    return strcmp(*(const char**)v1, *(const char**)v2);
}

int comp4( const void* v1, const void* v2) {
    return strlen(*(const char**)v1) - strlen(*(const char**)v2);
}

int comp5( const void* v1, const void* v2) {
    const char* string1 = *(const char**)v1;
    const char* string2 = *(const char**)v2;
    int spaces1 = 0, spaces2 = 0, i = 0;
    
    while (string1[i]){
        if (string1[i] == ' ')
            spaces1++;
        i++;
    }
    i = 0;
    while (string2[i]){
        if (string2[i] == ' ')
            spaces2++;
        i++;
    }
    
    return spaces1-spaces2;
}

int comp6( const void* v1, const void* v2) {
    return (*(Person*)v1).age - (*(Person*)v2).age;
}
