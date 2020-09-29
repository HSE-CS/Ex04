#include "task1.h"
#include <algorithm>
#include <cstring>
#include <string>
#include <iostream>
using namespace std;

int comp1(const void* a, const void* b)//öåëîå ÷èñëî(ñðàâíåíèå ïî çíà÷åíèþ) - òèï int
{
	return (*(const int*)a - *(const int*)b);
}

int comp2(const void* a, const void* b)//âåùåñòâåííîå ÷èñëî(ñðàâíåíèå ïî çíà÷åíèþ) - òèï double
{
	return (*(const double*)a - *(const double*)b) > 0.0 ? 1 : -1;
}

int comp4(const void* a, const void* b)//ñòðîêà(ñðàâíåíèå ïî äëèíå) - òèï const char*
{
	return (strlen(*(const char**)a) - strlen(*(const char**)b));
}

int comp3(const void* a, const void* b)//ñòðîêà(ñðàâíåíèå ïî çíà÷åíèþ) - òèï const char*
{
	return strcmp((*(const char**)a), (*(const char**)b));
}

int comp5(const void* a, const void* b)//ñòðîêà(ñðàâíåíèå ïî êîëè÷åñòâó ïðîáåëîâ) - òèï const char*
{
	string str1 = *(const char**)a;
	string str2 = *(const char**)b;
	int space1{ 0 }, space2{ 0 };

	space1 = count(str1.begin(), str1.end(), ' ');
	space2 = count(str2.begin(), str2.end(), ' ');

	return space1 - space2;
}

int comp6(const void* a, const void* b)//ñòðóêòóðà Person (ñðàâíåíèå ïî âîçðàñòó)
{
	return (((const Person*)a)->age - ((const Person*)b)->age);
}
