#include<iostream>
#include<math.h>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include<stdio.h>
#include<iomanip>
#include<cstring>
#include<string>

using namespace std;

struct Person
{
	string   name;
	unsigned age;
};

int comp1(const void* a, const void* b);
int comp2(const void* a, const void* b);
int comp3(const void* a, const void* b);
int comp4(const void* a, const void* b);
int comp5(const void* a, const void* b);
int comp6(const void* a, const void* b);
