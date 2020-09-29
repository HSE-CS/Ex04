#include "task1.h"

int comp1(const void* a, const void* b)
{
	return (*(int*)a - *(int*)b);
}

int comp2(const void* a, const void* b)
{
	double result = *(double*)a - *(double*)b;
	if (result > 0.0)
		return 1;
	else if (result == 0.0)
		return 0;
	else
		return -1;
}

int comp3(const void* a, const void* b)
{
	return strcmp((*(char**)a), (*(char**)b));
}

int comp4(const void* a, const void* b)
{
	return strlen((*(char**)a)) - strlen((*(char**)b));
}

int comp5(const void* a, const void* b)
{
	int count1 = 0;
	int count2 = 0;

	for (int i = 0; i < strlen((*(char**)a)); i++)
		if (((*(char**)a))[i] == ' ')
			count1++;


	for (int i = 0; i < strlen((*(char**)b)); i++)
		if (((*(char**)b))[i] == ' ')
			count2++;

	return count1 - count2;
}

int comp6(const void* a, const void* b)
{
	return ((Person*)a)->age - ((Person*)b)->age;
}