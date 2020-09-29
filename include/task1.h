#pragma once

#include <iostream>
#include <cstdlib>
#include <cstring>

struct Person
{
	std::string name;
	unsigned int age;
};

int comp1(const void* p1, const void* p2);
int comp2(const void* p1, const void* p2);
int comp3(const void* p1, const void* p2);
int comp4(const void* p1, const void* p2);
int comp5(const void* p1, const void* p2);
int comp6(const void* p1, const void* p2);
