//
// Created by sharg on 29.09.2020.
//
#include "task1.h"
#include <cstring>
using namespace std;
bool comp1(int first,int second){
    return first<second;
}
bool comp2(double first,double second){
    return first<second;
}
bool comp3(const char *first,const char *second){
    return first<second;
}
bool comp4(const char *first,const char *second){
    return strlen(first)<strlen(second);
}
bool comp5(const char *first,const char *second){
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
    return numOfSpacesInFirst<numOfSpacesInSecond;
}
bool comp6(Person* first,Person* second){
    return  first->age<second->age;
}