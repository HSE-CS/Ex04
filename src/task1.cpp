#include "task1.h"

int comp1(const void* a, const void* b)
{
	if (*(int*)a < *(int*)b)
		return -1;
	if (*(int*)a == *(int*)b)
		return 0;
	if (*(int*)a > * (int*)b)
		return 1;
}

int comp2(const void* a, const void* b)
{
	if (*(double*)a < *(double*)b)
		return -1;
	if (*(double*)a == *(double*)b)
		return 0;
	if (*(double*)a > * (double*)b)
		return 1;
}

int comp3(const void* a, const void* b)
{
	return strcmp(*(char**)a, *(char**)b);
}

int comp4(const void* a, const void* b)
{
	int a1 = strlen(*(char**)a);
	int a2 = strlen(*(char**)b);
	return (a1 - a2);
}

int comp5(const void* a, const void* b)
{
	char* str1 = (*(char**)a);
	char* str2 = (*(char**)b);
	int l1 = strlen(str1);
	int l2 = strlen(str2);
	int a1 = 0;
	int a2 = 0;
	for (int i = 0; i < l1; i++)
	{
		if (str1[i] == ' ')
			a1++;
	}
	for (int i = 0; i < l2; i++)
	{
		if (str2[i] == ' ')
			a2++;
	}
	return (a1 - a2);
}

int comp6(const void* a, const void* b)
{
	unsigned a1 = (*(Person*)a).age;
	unsigned a2 = (*(Person*)b).age;
	return (a1 - a2);
}
