#ifndef TASK1_H
#define TASK1_H
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>
#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const size_t LARGE_SIZE = 10;

struct rnd {
	double operator()() {
		return rand() % LARGE_SIZE;
	}
};

struct Person {
	string   name;
	unsigned age;
};

int comp1(const void* a, const void* b);
int comp2(const void* a, const void* b);
int comp3(const void* a, const void* b);
int comp4(const void* a, const void* b);
int comp5(const void* a, const void* b);
int comp6(const Person* a, const Person* b);
void Proga(int sizeNew);

#endif //TASK1_H