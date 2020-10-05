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

}

int comp3(const void* a, const void* b) {

	return strcmp(*((char**)a), *((char**)b));
}


int comp4(const void* a, const void* b) {
	return (strlen(*((char**)a)) - strlen(*((char**)b)));
}


int comp5(const void* a, const void* b) {
	unsigned int v = 0, w = 0;
	for (unsigned int i = 0; i < strlen(*((char**)a)); i++) 
	{
		if ((*((char**)a))[i] == ' ') {
			v++;
		}
	}
	for (unsigned int i = 0; i < strlen(*((char**)b)); i++) {
		if ((*((char**)b))[i] == ' ')
			w++;
	}
	return (v - w);
}


int comp6(const void* a, const void* b) {
	return (int)(((Person*)a)->age - ((Person*)b)->age);
}

