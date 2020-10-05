#include "task1.h"
#include <algorithm>
#include <string>
#include <iostream>
#include <string.h>

int comp1(const void* a, const void* b) {
		return (*(int*)a - *(int*)b);
}


int comp2(const void* a, const void* b) {
	if (*(double*)a > * (double*)b) {
		return 1;
	}
	else if (*(double*)a < *(double*)b) {
		return -1;
	}
	else return 0;
	
	/*return (*(double*)a - *(double*)b);*/
}


int comp3(const void* a, const void* b) {
	
	if ((const char*)a > (const char*)b) {
		return 1;
	}
	else if ((const char*)a < (const char*)b) {
		return -1;
	}
	else {
		return 0;
	}
	/*return (strcmp((const char*)a, (const char*)b));*/
}


int comp4(const void* a, const void* b) {
	return (strlen((const char*)a) - strlen((const char*)b));
}


int comp5(const void* a, const void* b) {
	int aSpace = 0, bSpace = 0;
	const char* aPtr = (const char*)a;
	const char* bPtr = (const char*)b;
	for (int i = 0; i < strlen((const char*)a); i++) {
		if (aPtr[i] == ' ') {
			aSpace++;
		}
	}
	for (int i = 0; i < strlen((const char*)b); i++) {
		if (bPtr[i] == ' ') {
			bSpace++;
		}
	}
	return (aSpace - bSpace);
}


int comp6(const void* a, const void* b) {
	return (int)(((Person*)a)->age - ((Person*)b)->age);
}

