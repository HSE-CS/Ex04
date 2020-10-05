#include "task1.h"

int comp1(const void* a, const void* b) {
	return (*(int*)a - *(int*)b);
}

int comp2(const void* a, const void* b) {
	return (*(double*)a - *(double*)b);
}

int comp3(const void* s1_n, const void* s2_n) {
	int i = 0;
	char* s1 = (char*)s1_n;
	char* s2 = (char*)s2_n;
	while (s1[i] != '\0' && s2[i] != '\0') {
		if (s1[i] < s2[i]) {
			return -1;
		}
		else if (s1[i] > s2[i]) {
			return 1;
		}
	}
	return 0;
}

int comp4(const void* s1_n, const void* s2_n) {
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
}

int comp5(const void* s1_n, const void* s2_n) {
	int i = 0, len1 = 0, len2 = 0;
	char* s1 = (char*)s1_n;
	char* s2 = (char*)s2_n;
	while (s1[i] != '\0') {
		if (s1[i] == ' ') {
			len1++;
		}
	}
	while (s2[i] != '\0') {
		if (s2[i] == ' ') {
			len2++;
		}
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
}

int comp6(const void* p1_n, const void* p2_n) {
	Person p1 = *(Person*)p1_n;
	Person p2 = *(Person*)p2_n;
	if (p1.age < p2.age) {
		return -1;
	}
	else if (p1.age > p2.age) {
		return 1;
	}
	else {
		return 0;
	}

	return 0;
}
