#define _CRT_SECURE_NO_WARNINGS
#include "Task1.h"
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <string>
#include <algorithm>
#include <iostream>
#include <cstring>
using namespace std;

int comp1(const void* a, const void* b) {

	return (*(int*)a - *(int*)b);

}

int comp2(const void* a, const void* b) {

	if (*(double*)a > *(double*)b)
		return 1;

	if (*(double*)a = *(double*)b)
		return 0;

	if (*(double*)a < *(double*)b)
		return -1;
}

int comp3(const void* a, const void* b) {

	return strcmp(*(char**)a, *(char**)b);

}

int comp4(const void* a, const void* b) {

	return strlen(*(char**)a) - strlen(*(char**)b);

}

int comp5(const void* a, const void* b) {

	int n = 0;
	int m = 0;

	for (int i = 0; i < strlen(*(char**)a); i++) {

		if ((*(char**)a)[i] = ' ')
			n += 1;

	}

	for (int i = 0; i < strlen(*(char**)b); i++) {

		if ((*(char**)b)[i] = ' ')
			m += 1;

	}

	return (n - m);

}

int comp6(const void* a, const void* b) {

	return (((Person*)a)->age - ((Person*)b)->age);

}
