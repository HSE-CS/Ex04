#include "task1.h"
#include <stdio.h>
#include <string.h>
int comp1(const void* a, const void* b) {
	return (*(int*)a - *(int*)b);
}

int comp2(const void* a, const void* b) {
	return (*(double*)a - *(double*)b);
}

int comp3(const void* a, const void* b) {
	return strcmp(*(const char**)a, *(const char**)b);
}

int comp4(const void* a, const void* b) {
	return (strlen(*(const char**)a)-strlen(*(const char**)b));
}

int comp5(const void* a, const void* b) {
	int count1 = 0, count2 = 0;
	for (int i = 0; i<strlen(*(const char**)a); i++)
		if ((*(const char**)a)[i] == ' ')
			count1++;

	for (int i = 0; i < strlen(*(const char**)b); i++)
		if ((*(const char**)b)[i] == ' ')
			count2++;
		
	return (count1 - count2);
}

int comp6(const void* a, const void* b) {
	return (((struct Person*) a)->age - ((struct Person*)b)->age);
}

