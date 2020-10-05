#include "task1.h"
#include <cstring>
#include <iostream>
#include <string.h>
#include <string>

int comp1(void* a, void* b) {
	return (*(int*)a - *(int*)b);
}

int comp2(void* a, void* b) {
	if(*(double*)a > *(double*)b) {
		return 1;
	}
	if(*(double*)a < *(double*)b) {
		return -1;
	}
	if(*(double*)a == *(double*)b) {
		return 0;
	}
}

int comp3(void* a, void* b) {
	return (strcmp(*((char**)a), *((char**)b)));
}

int comp4(void* a, void* b) {
	return static_cast<int>(strlen(*(char**)a) - strlen(*(char**)b));
}

int comp5(void* a, void* b) {
	int count1 = 0;
	int count2 = 0;
	for(int i = 0; (*(char**)a)[i] != '\0'; i++) {
		if ((*(char**)a)[i] == ' ') {
			count1++;	
		}
	}
	for(int i = 0; (*(char**)b)[i] != '\0'; i++) {
		if ((*(char**)b)[i] == ' ') {
			count2++;
		}
	}
	return count1 - count2;
}

int comp6(void* a, void* b) {
	return static_cast<int>( ((Person*)a)->age - ((Person*)b)->age );
}

