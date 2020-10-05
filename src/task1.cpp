#include "task1.h"
#include <cmath>
#include <limits>
#include<cstring>
#include<iostream>
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
	
	int i =  strcmp((*(const char ** )a),(*(const char **)b));
	return i; 
}

int comp4(const void * a , const void * b)
{
	return (strlen(*(char**)a)) - (strlen(*(char**)b));
}
int comp6(const void *   a, const void * b)
{
	return ((Person *)a)->age-((Person*)b)->age;
}
int comp5(const void* a, const void* b)
{
	const char * one = (*(char **)a);
	const char * two = (*(char **)b);
	int count1 = 0;
	int count2 = 0;


	
	for(int i = 0; i < strlen(one) - 1; i++)
	{
		char  m[] = {one[i],'\0'};
		
		if(strcmp(m," ") == 0)
			count1++;
	}
	for(int i = 0; i < strlen(two)-1; i++)
	{
		char  n[] = {two[i],'\0'};

		if(strcmp(n," ") == 0)
			count2++;
	}

	return count1-count2;
	
}

