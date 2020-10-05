#include <iostream>
#include <cstring>
#include "task1.h"

int comp1(const void *a, const void *b) 
{
	auto c = *(int *)a;
	auto d = *(int *)b;
	if (c > d)
	{
		return 1;
	}
	else
		if (c < d)
		{
			return -1;
		}
		else
			if (c == d)
			{
				return 0;
			}
}

int comp2(const void *a, const void *b) 
{
	auto c = *(double *)a;
	auto d = *(double *)b;
	if (c > d)
	{
		return 1;
	}
	else 
		if (c < d)
		{
			return -1;
		}
		else 
			if (c == d)
			{
				return 0;
			}
}

int comp3(const void *a, const void *b) 
{
	auto c = *(char **)a;
	auto d = *(char **)b;
	auto e = strcmp(c, d);
	return e;
}

int comp4(const void *a, const void *b) 
{
	auto c = strlen(*(char **)a);
	auto d = strlen(*(char **)b);
	if (c > d)
	{
		return 1;
	}
	else 
		if (c < d)
		{
			return -1;
		}
		else 
			if (c == d)
			{
				return 0;
			}
}

int comp5(const void *a, const void *b) 
{
	int spac1 = 0;
	int spac2 = 0;
	for (int i = 0; i < strlen(*(const char **)a); i++) 
	{
		if ((*(const char **)a)[i] == ' ')
		{
			spac1++;
		}
	}
	for (int i = 0; i < strlen(*(const char **)b); i++) 
	{
		if ((*(const char **)b)[i] == ' ')
		{
			spac2++;
		}
	}
	if (spac1 > spac2)
	{
		return 1;
	}
	else
		if (spac1 < spac2)
		{
			return -1;
		}
		else
			if (spac1 == spac2)
			{
				return 0;
			}
}

int comp6(const void *a, const void *b) 
{
	struct Person p1 = (*(Person *)a);
	struct Person p2 = (*(Person *)b);
	if (p1.age > p2.age)
	{
		return 1;
	}
	else
		if (p1.age < p2.age)
		{
			return -1;
		}
		else
			if (p1.age == p2.age)
			{
				return 0;
			}
}