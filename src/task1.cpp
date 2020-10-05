#define _CRT_SECURE_NO_WARNINGS
#include "task1.h"
#include <malloc.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int comp1(const void* a, const void* b) {
	return (*(int*)a - *(int*)b);
}

int comp2(const void* a, const void* b) {
	double eps = 1e-5;
	if (fabs(*(double*)a - *(double*)b) < eps) return 0;
	else if (*(double*)a - *(double*)b > eps) return 1;
	else return -1;
}

int comp3(const void* a, const void* b) {
	return strcmp((const char*)a, (const char*)b);
}

int comp4(const void* a, const void* b) {
	return (strlen((const char*)a) - strlen((const char*)b));
}

int comp5(const void* a, const void* b) {
	string s1(*(char**)a);
	string s2(*(char**)b);
	auto cs1 = count(s1.begin(), s1.end(), ' ');
	auto cs2 = count(s2.begin(), s2.end(), ' ');
	if (cs1 > cs2) return 1;
	else if (cs1 == cs2) return 0;
	else return -1;
}

int comp6(const void* a, const void* b) {
	return (int)(((Person*)a)->age - ((Person*)b)->age);
}