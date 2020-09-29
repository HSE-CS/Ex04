#include "task1.h"

int comp1(const void* a, const void* b) {
	return (*(int*)a - *(int*)b);
}

int comp2(const void* a, const void* b) {
	return (*(double*)a - *(double*)b);
}

int comp3(const void* a, const void* b) {
	return (*(const char*)a - *(const char*)b);
}

int comp4(const void* a, const void* b) {
	return (strlen((char*)a)- strlen((char*)b));
}

int comp5(const void* a, const void* b) {
	return (*(const char*)a - *(const char*)b);
}

int comp6(const void* a, const void* b) {
	return (*(const char*)a - *(const char*)b);
}

