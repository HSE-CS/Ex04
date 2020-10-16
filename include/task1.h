#pragma once
#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int comp1(const void* a, const void* b);
int comp2(const void* a, const void* b);
int comp3(const void* a, const void* b);
int comp4(const void* a, const void* b);
int comp5(const void* a, const void* b);
int comp6(const void* a, const void* b);

struct Person
{
	string name;
	unsigned age;
};