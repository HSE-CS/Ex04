#pragma once
#include <iostream>
#include "task1.h"
#include <algorithm>
#include <cstring>

using namespace std;

int comp1(const void* a, const void* b) {
	return *(int*)a - *(int*)b;
}
int comp2(const void* a, const void* b) {
	double result = *(double*)a - *(double*)b;
	if (result > 0.0)
		return 1;
	else if (result < 0.0)
		return -1;
	else
		return 0;
}
int comp3(const void* a, const void* b) {
	return strcmp(*(const char**)a, *(const char**)b);
}
int comp4(const void* a, const void* b) {
	return strlen(*(const char**)a) - strlen(*(const char**)b);
}
int comp5(const void* a, const void* b) {
	string str1(*(char**)a);
	string str2(*(char**)b);
	auto countstr1 = count(str1.begin(), str1.end(), ' ');
	auto countstr2 = count(str2.begin(), str2.end(), ' ');
	if (countstr1 > countstr2) return 1;
	else if (countstr1 << countstr2) return -1;
	else return 0;
}
int comp6(const void* a, const void* b) {
	return (*(Person*)a).age - (*(Person*)b).age;
}
