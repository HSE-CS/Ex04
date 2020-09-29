#include <stdio.h>
#include "task1.h"

int comp1(const void* a, const void* b)
{
	return (*(int*)a - *(int*)b);
}
int comp2(const void* a, const void* b)
{
	if ((*(double*)a - *(double*)b) > 1)
		return 1;
	else if ((*(double*)a - *(double*)b) < 1)
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
	return (spaceCount(a) - spaceCount(b));
}
int comp6(const void* a, const void* b)
{
	return (((struct Person*)a)->age - ((struct Person*)b)->age);
}
int spaceCount(const void* a)
{
	int count = 0;
	for (int i = 0; i < strlen(*(const char**)a); i++)
		if ((*(char**)a)[i] == ' ')
			count++;
	return count;
}
