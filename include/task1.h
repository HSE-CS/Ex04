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

int comp1(const void* a, const void* b);//����� �����(��������� �� ��������) - ��� int
int comp2(const void* a, const void* b);//������������ �����(��������� �� ��������) - ��� double
int comp3(const void* a, const void* b);//������(��������� �� �����) - ��� const char*
int comp4(const void* a, const void* b);//������(��������� �� ��������) - ��� const char*
int comp5(const void* a, const void* b);//������(��������� �� ���������� ��������) - ��� const char*
int comp6(const void* a, const void* b);//��������� Person (��������� �� ��������)

#endif
