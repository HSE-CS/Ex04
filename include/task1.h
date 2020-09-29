#pragma once
#include <string.h>

struct Person
{
	char* name;
	unsigned age;
};

int comp1( const void* x, const void* y);
int comp2( const void* x, const void* y);
int comp3(const void* str1, const void* str2);
int comp4(const void* str1, const void* str2); 
int comp5(const void* str1, const void* str2);
int comp6( const void* p1, const void* p2);