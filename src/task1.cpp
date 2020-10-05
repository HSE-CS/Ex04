#include "task1.h"
#include <cstring>
#include <iostream>

int comp1(void* a, void* b) {
	return (*((int*)a) - *((int*)b));
}

int comp2(void* a, void* b) {
	return ((int)(*((double*)a)) - (int)(*((double*)b)));
}

int comp3(void* a, void* b) {
	return strcmp((const char*)a, (const char*)b);
}

int comp4(void* a, void* b) {
	return (strlen((const char*)a) - strlen((const char*)b));
}

int comp5(void* a, void* b) {
	int count1 = 0;
	int count2 = 0;
	for(int i = 0; ((const char*)a)[i] != '\0'; i++) {
		if (((const char*)a)[i] == ' ') {
			count1++;	
		}
	}
	for(int i = 0; ((const char*)b)[i] != '\0'; i++) {
		if (((const char*)b)[i] == ' ') {
			count2++;
		}
	}
	return count1 - count2;
}

int comp6(void* a, void* b) {
	return ((int)(((Person*)a)->age) - (int)(((Person*)b)->age));
}

