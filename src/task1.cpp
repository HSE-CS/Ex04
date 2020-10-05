#include <string>
#include <algorithm>
#include <iostream>
#include <cstring>
#include "task1.h"
using namespace std;

int comp1(const void * a, const void * b) {
	return (*(int*)a - *(int*)b);
}

int comp2(const void* a, const void* b)
{
	if (*(double*)a - *(double *)b > 0.0)
		return 1;
	else if (*(double*)a - *(double *)b < 0.0)
		return -1;
	else
		return 0;
}

int comp3(const void* a, const void* b) {
	return strcmp(*(char**)a, *(char**)b);
}

int comp4(const void* a, const void* b) {
	return strlen(*(char**)a) - strlen(*(char**)b);
}

int comp5(const void* a, const void* b) {
	string str1(*(char**)a);
	string str2(*(char**)b);
	return count(str1.begin(), str1.end(), ' ') - count(str2.begin(), str2.end(), ' ');
}

int comp6(const void* a, const void* b) {
	return (((struct Person*)a)->age - ((struct Person*)b)->age);
}