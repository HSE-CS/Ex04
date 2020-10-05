#include "task1.h"

int comp1(const void* a, const void* b) {
	if ((*(int*)a - *(int*)b) > 0)
		return 0;
	if ((*(int*)a - *(int*)b) < 0)
		return -1;
	if ((*(int*)a - *(int*)b) == 0)
		return 0;
}

int comp2(const void* a, const void* b) {
	if ((*(double*)a - *(double*)b) > 0)
		return 0;
	if ((*(double*)a - *(double*)b) < 0)
		return -1;
	if ((*(double*)a - *(double*)b) == 0)
		return 0;
}