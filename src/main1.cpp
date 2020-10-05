#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include "task1.h"
#include <string>

using namespace std;


int main()
{
	const size_t n = 6;
	const char* arr[n]{ "nnn", "uuu", "kkk", "ppp", "sss", "ttt" };
	qsort(arr, n, sizeof(const char*), comp3);
	const char* expected[n]{ "kkk", "nnn", "ppp", "sss", "ttt", "uuu" };

	for (size_t i = 0; i < n; i++)
		if (!strcmp(expected[i], arr[i]))
			printf("%s\n", expected[i]);
}