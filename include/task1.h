#ifndef TASK1_H
#define TASK1_H
#include <cstring>
#include <string>
#include <iostream>
using namespace std;

typedef struct person
{
	string name;
	unsigned age;
} Person;

int comp1(const void* a, const void* b);//целое число(сравнение по значению) - тип int
int comp2(const void* a, const void* b);//вещественное число(сравнение по значению) - тип double
int comp3(const void* a, const void* b);//строка(сравнение по длине) - тип const char*
int comp4(const void* a, const void* b);//строка(сравнение по значению) - тип const char*
int comp5(const void* a, const void* b);//строка(сравнение по количеству пробелов) - тип const char*
int comp6(const void* a, const void* b);//структура Person (сравнение по возрасту)

#endif
