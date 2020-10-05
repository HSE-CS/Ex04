#include "task1.h"
#include <cmath>
#include <limits>
#include<cstring>
int comp1(const void * a, const void * b)
{
	return (*((int *)a)) - (*((int*)b));
}
int comp2(const void * a, const  void* b)
{
	return (*((double*)a)) - (*((double*)b))  > 0.00000001;
}

int comp3(const void * a , const void * b)
{
	return strcmp((char*)a,(char*)b);
}

int comp4(const void * a , const void * b)
{
	return strlen((char*)a) - strlen((char*)b);
}
int comp6(const void *   a, const void * b)
{
	return ((Person *)a)->age-((Person*)b)->age;
}
int comp5(const void* a, const void* b)
{
	char * one = ((char *)a);
	char * two = ((char *)b);
	int count1 = 0;
	int count2 = 0;
	for(int i = 0; i < strlen(one); i++)
	{
		if(one[i] == ' ');
			count1++;
	}
	for(int i = 0; i < strlen(two); i++)
	{
		if(one[i] == ' ')
			count2++;
	}
	return count1-count2;
	
}

