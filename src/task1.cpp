//
// Created by sharg on 29.09.2020.
//
#include "task1.h"

#include <cstring>

int comp1(int first,int second){
    return first-second;
}
int comp2(double first,double second){
    if ((first - second) < 0)
        return  -1;

    else if ((first - second) > 0)
        return 1;

    else
        return 0;
}
int comp3(const char *first,const char *second){
    return strcmp(first,second);
}
int comp4(const char *first,const char *second){
    return strlen(first)-strlen(second);
}
int comp5(const char *first,const char *second){
    int numOfSpacesInFirst = 0, numOfSpacesInSecond = 0;
    for (int i = 0; i < strlen(first); ++i) {
        if (first[i] == ' '){
            numOfSpacesInFirst ++;
        }
    }
    for (int i = 0; i < strlen(second); ++i) {
        if (second[i] == ' '){
            numOfSpacesInSecond ++;
        }
    }
    return numOfSpacesInFirst-numOfSpacesInSecond;
}
int comp6(Person* first,Person* second){
    return  (*first).age-(*second).age;
}