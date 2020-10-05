#include "task1.h"
int comp1(int a, int b) {
	if (a < b) {
		return -1;
	}
	else if (a > b) {
		return 1;
	}
	else {
		return 0;
	}
}

int comp2(double a, double b) {
	if (a < b) {
		return -1;
	}
	else if (a > b) {
		return 1;
	}
	else {
		return 0;
	}
}

int comp3(const char* s1, const char* s2) {
	int i = 0;
	while (s1 != '\0' && s2 != '\0') {
		if (s1[i] < s2[i]) {
			return -1;
		}
		else if (s1[i] > s2[i]) {
			return 1;
		}
	}
	return 0;
}

int comp4(const char* s1, const char* s2) {
	int i = 0, len1 = 0, len2 = 0;
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

int comp5(const char* s1, const char* s2) {
	int i = 0, len1 = 0, len2 = 0;
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

int comp6(const Person& p1, const Person& p2) {
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
