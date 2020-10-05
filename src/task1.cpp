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

double comp2(const void* a, const void* b) {
	return (*(double*)a - *(double*)b);
}

int comp3(const void* a, const void* b) {
	return strcmp((const char*)a, (const char*)b);
}

int comp4(const void* a, const void* b) {
	return (strlen((const char*)a) - strlen((const char*)b));
}

int comp5(const void* a, const void* b) {
	int h = { 0 };
	int k = { 0 };
	const char* s1 = (const char*)a;
	const char* s2 = (const char*)b;
	for (int i = 0; i < strlen((const char*)a); i++) if (s1[i] == ' ') h++;
	for (int i = 0; i < strlen((const char*)b); i++) if (s2[i] == ' ') k++;
	return (h - k);;
}

int comp6(const void* a, const void* b) {
	return 
}
