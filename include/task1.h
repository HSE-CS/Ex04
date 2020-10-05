#ifndef TASK1_H
#define TASK1_H
using namespace std;

struct Person
{
	string   name;
	unsigned age;
};

int comp1(const void* a, const void* b); //по значению (целое)
int comp2(const void* a, const void* b);  //по значению (веществ)
int comp3(const void* a, const void* b);//по значению (строка)
int comp4(const void* a, const void* b);//по длине (строка)
int comp5(const void* a, const void* b);//по числу пробелов (строка)
int comp5(const void* a, const void* b);

#endif "TASK1_H"