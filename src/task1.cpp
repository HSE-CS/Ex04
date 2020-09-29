#include "task1.h"


int comp1(const void* a, const void* b)
{
	return (*(int*)a - *(int*)b);
}

int comp2(const void* a, const void* b)
{
	return (*(double*)a - *(double*)b) > 0.0 ? 1 : -1;
}

int comp3(const void* a, const void* b) 
{
	return (strcmp(*(char**)a, *(char**)b));
}

int comp4(const void* a, const void* b)
{
	return (strlen(*(char**)a) - strlen(*(char**)b));
}

int comp5(const void* a, const void* b)
{
	const char* str1 = *(const char**)a;
	const char* str2 = *(const char**)b;
	unsigned int len_str1 = 0, len_str2 = 0;
	int i = 0, j = 0;
	char gap = ' ';

	while (str1[i++])
		if (str1[i - 1] == gap)
			len_str1++;

	while (str2[j++])
		if (str2[j - 1] == gap)
			len_str2++;

	return len_str1 - len_str2;
}

int comp6(const void* a, const void* b)
{
	return (((Person*)a)->age - ((Person*)b)->age);
}