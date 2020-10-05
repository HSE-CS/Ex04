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
	
	return strcmp(*((char**)a), *((char**)b));
}


int comp4(const void* a, const void* b) {
	return (strlen((*(char**)a) - strlen((*(char**)b))));
}


int comp5(const void* a, const void* b) {
	int aSpace = 0, bSpace = 0;
	char* aPtr = ((*((char**)a)));
	char* bPtr = ((*((char**)b)));
	for (int i = 0; i < strlen((*((char**)a))); i++) {
		if (aPtr[i] == ' ') {
			aSpace++;
		}
	}
	for (int i = 0; i < strlen(*((char**)b)); i++) {
		if (bPtr[i] == ' ') {
			bSpace++;
		}
	}
	return (aSpace - bSpace);
}


int comp6(const void* a, const void* b) {
	return (int)(((Person*)a)->age - ((Person*)b)->age);
}

