#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "task1.h"

using namespace std;

int comp1(const void* a, const void* b) {
	return (*(int*)a - *(int*)b);
}
int comp2(const void* a, const void* b) {
	if (*(double*)a > *(double*)b)
		return 1;
	if (*(double*)a = *(double*)b)
		return 0;
	if (*(double*)a < *(double*)b)
		return -1;
}
int comp3(const void* a, const void* b) {
	
	return strcmp(*(char**)a, *(const char**)b);
}
int comp4(const void* a, const void* b) {
	return strlen(*(char**)a)- strlen(*(char**)b);

}
int comp5(const void* a, const void* b) {
	int s1 = 0;
	int s2 = 0;
	for (int i = 0; i < strlen(*(char**)a); i++){
		if ((*(char**)a)[i] == ' ')
			s1 += 1;
	}
	for (int i = 0; i < strlen(*(char**)b); i++){
		if ((*(char**)b)[i] == ' ')
			s2 += 1;
	}
	if (s1 > s2)
		return 1;
	if (s1 = s2)
		return 0;
	if (s1 < s2)
		return -1;
}
int comp6(const void* a, const void* b) {
	return (((Person*)a) -> age - ((Person*)b)->age);

}