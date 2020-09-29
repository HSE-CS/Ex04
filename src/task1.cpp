#include <stdio.h>
#include "task1.h"

int comp1(const void* a, const void* b)
{
	return (*(int*)a - *(int*)b);
}
int comp2(const void* a, const void* b)
{
	if ((*(double*)a - *(double*)b) > 0)
		return 1;
	else if ((*(double*)a - *(double*)b) < 0)
		return -1;
	else
		return 0;
}
int comp3(const void* a, const void* b)
{
	return strcmp(*((char**)a), *((char**)b));
}
int comp4(const void* a, const void* b)
{
	return (strlen(*((char**)a)) - strlen(*((char**)b)));
}
int comp5(const void* a, const void* b)
{
	int count1 = 0, count2 = 0;
	for (int i = 0; i < strlen(*(const char**)a); i++)
		if ((*(char**)a)[i] == ' ')
			count1++;
	for (int i = 0; i < strlen(*(const char**)b); i++)
		if ((*(char**)b)[i] == ' ')
			count2++;
	return (count1 - count2);
}
int comp6(const void* a, const void* b)
{
	return (((struct Person*)a)->age - ((struct Person*)b)->age);
}
