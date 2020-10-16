#include <iostream>
#include <cstring>
#include <algorithm>
#include "task1.h"

using namespace std;

int comp1(const void* a, const void* b) {
  return *(int*)a - *(int*)b;
}

int comp2(const void* a, const void* b) {
  double Res = *(double*)a - *(double*)b;
  if (Res < 0.0) return -1;
  else if (Res > 0.0) return 1;
  else return 0;
}

int comp3(const void* a, const void* b) {
  return strcmp(*(const char**)a, *(const char**)b);
}

int comp4(const void* a, const void* b) {
  return strlen(*(const char**)a) - strlen(*(const char**)b);
}

int comp5(const void* a, const void* b) {
  string s1(*(char**)a);
  string s2(*(char**)b);
  auto cs1 = count(str1.begin(), str1.end(), ' ');
  auto cs2 = count(str2.begin(), str2.end(), ' ');
  if (cs1 > cs2) 
    return 1;
  else if (cs1 < cs2) 
    return -1;
  else 
    return 0;
}

int comp6(const void* a, const void* b) {
  return (*(Person*)a).age - (*(Person*)b).age;
}