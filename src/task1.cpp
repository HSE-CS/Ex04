/*
 * @author Mingboev Khudayberdi
 */
#include "task1.h"

int comp1(const void* a, const void* b) {
	return (*(int*)a - *(int*)b);
}

int comp2(const void* a, const void* b) {
	return ((*(double*)a - *(double*)b) > 0.0 ) ? 1 : -1;
}

int comp3(const void* a, const void* b) {
	return strcmp(*(const char**)a, *(const char**)b);
}

int comp4(const void* a, const void* b) {
	return strlen(*(const char**)a) - strlen(*(const char**)b);
}

int comp5(const void* a, const void* b) {
	int c1=0, c2=0; //c1 = counter for string a, c2 = counter for string b
	int s1 = strlen(*(const char**)a), s2 = strlen(*(const char**)a); // s1 = size of string a, s2 = size of string b
	for (int i = 0; i < s1 ; i++) {
		if ((*(const char**)a)[i] == ' ')
			c1++;
	}
	for (int i = 0; i < s2; i++) {
		if ((*(const char**)b)[i] == ' ')
			c2++;
	}
	return c1 - c2;
}

int comp6(const void* a, const void* b) {
	return (*(Person*)a).age - (*(Person*)b).age;
}
