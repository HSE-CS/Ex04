#include "task1.h"

int comp1(const void* a, const void* b) {
	return (*(int*)a - *(int*)b);
}

int comp2(const void* a, const void* b) {
	if (*(double*)a - *(double*)b < 0.0000) {
		return -1;
	}
	else if (*(double*)a - *(double*)b > 0.0000) {
		return 1;
	}
	else {
		return 0;
	}
}

int comp3(const void* s1, const void* s2) {
	return (strcmp(*((char**)s1), *((char**)s2)));
	/*
	while ((*(char**)s1)[i] != '\0' && s2[i] != '\0') {
		if (s1[i] < s2[i]) {
			return -1;
		}
		else if (s1[i] > s2[i]) {
			return 1;
		}
	}
	return 0;
	*/
}

int comp4(const void* s1, const void* s2) {
	return (strlen(*((char**)s1)) - strlen(*((char**)s2)));
	/*
	int i = 0, len1 = 0, len2 = 0;
	char* s1 = (char*)s1_n;
	char* s2 = (char*)s2_n;
	while (s1[i] != '\0') {
		len1++;
	}
	while (s2[i] != '\0') {
		len2++;
	}
	if (len1 < len2) {
		return -1;
	}
	else if (len1 > len2) {
		return 1;
	}
	else {
		return 0;
	}

	return 0;
	*/
}

int comp5(const void* s1, const void* s2) {
	int i = 0, len1 = 0, len2 = 0;
	while ((*((char**)s1))[i] != '\0') {
		if ((*((char**)s1))[i] == ' ') {
			len1++;
		}
	}
	while ((*((char**)s2))[i] != '\0') {
		if ((*((char**)s2))[i] == ' ') {
			len2++;
		}
	}
	return len1 - len2;
}

int comp6(const void* p1, const void* p2) {
	return ((Person*)p1)->age - ((Person*)p2)->age;
}
