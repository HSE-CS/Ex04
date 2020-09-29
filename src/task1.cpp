#include "task1.h"
using namespace std;
int comp1(const void* a, const void* b){
    return ( *( int* )a - *( int* )b );
}
int comp2(const void* a, const void* b){
    double result= ( *( double* )a - *( double* )b );
    if (result == 0)
        return 0;
    else if (result>0)
        return 1;
    else
        return -1;
}
int comp3(const void* a, const void* b){
    return strcmp( *(const char**) a, *(const char**) b );
}
int comp4(const void* a, const void* b){
    return strlen( *( const char** )a)- strlen(*( const char** )b);
}
int comp5(const void* a, const void* b){
    int result_1=0;
    int result_2=0;
    for(int i=0;i<strlen( *( const char** )a);i++){
        if ((*(const char **) a)[i]== ' ')
            result_1++;
    }
    for(int i=0;i<strlen( *( const char** )b);i++){
        if ((*(const char **) b)[i]== ' ')
            result_2++;
    }
    if (result_1 == result_2)
        return 0;
    else if (result_1 > result_2)
        return 1;
    else
        return -1;
}
int comp6(const void* a, const void* b){
    return (((Person*)a)->age - ((Person*)b)->age);
}
