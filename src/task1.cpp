#include "task1.h"
#include <string.h>
#include <string>
#include<algorithm>
#include<math.h>

using namespace std;

int comp1(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}
int comp2(const void *a, const void *b) {
    if (*(double *) a > *(double *) b) {
        return 1;
    }
    if (*(double *) a < *(double *) b) {
        return -1;
    }
    if (*(double *) a == *(double *) b) {
        return 0;
    }
}
int comp3(const void* a, const void* b) {
    return strcmp(*((char**)a), *((char**)b));;
}
int comp4(const void* a, const void* b) {
    return (strlen(*((char**)a)) - strlen(*((char**)b)));
}
int comp5(const void * a, const void * b){
    std::string s1 = *(char**)a;
    std::string s2 = *(char**)b;
    int space_amount1 = std::count(s1.begin(),s1.end(),' ');
    int space_amount2 = std::count(s2.begin(),s2.end(),' ');
    return space_amount1 - space_amount2;
}
int comp6(const void* a, const void* b) {
    Person* p1 = (Person*)a;
    Person* p2 = (Person*)b;
    return p1->age - p2->age;
}