#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <string.h>
#include "task1.h"

int comp1(const void* a, const void* b) {
	return (*(int*)a - *(int*)b);
}

int comp2(const void* a, const void* b) {
	if ((*(double*)a > * (double*)b)) return 1;
	else return 0;
}

int comp3(const void* a, const void* b) {
	return (strcmp(*(const char**)a, *(const char**)b));
}

int comp4(const void* a, const void* b) {
	return (strlen(*(const char**)a) - strlen(*(const char**)b));
}

int comp5(const void* a, const void* b) {
	int counta = 0, countb = 0;
	for (int i = 0; i < strlen(*(const char**)a); i++) {
		if ((*(const char**)a)[i] == ' ') {
			counta++;
		}
	}
	for (int i = 0; i < strlen(*(const char**)a); i++) {
		if ((*(const char**)b)[i] == ' ') {
			countb++;
		}
	}
	return (counta - countb);
}

int comp6(const void* a, const void* b) {
	return ((*(struct Person*)a).age - (*(struct Person*)b).age);
}
