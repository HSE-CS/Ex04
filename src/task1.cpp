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

int comp3(const void* a, const void* b) {
	return (strcmp(*((char**)a), *((char**)b)));
}


int comp4(const void* a, const void* b) {
	int i = strlen(*((char**)a)) - strlen(*((char**)b));
	return (i == 0 ? 0 : (i > 0 ? 1 : -1));
}
int comp5(const void* a, const void* b) {
	unsigned int n = 0, m = 0;
	for (unsigned int i = 0; i < strlen(*((char**)a)); i++)
	{
		if ((*((char**)a))[i] == ' ')
			n++;
	}
	for (unsigned int i = 0; i < strlen(*((char**)b)); i++)
	{
		if ((*((char**)b))[i] == ' ')
			m++;
	}
	int i = n - m;
	return (i == 0 ? 0 : (i > 0 ? 1 : -1));
}

int comp6(const void* a, const void* b) {
	int i = ((Person*)a)->age - ((Person*)b)->age;
	return (i == 0 ? 0 : (i > 0 ? 1 : -1));
}