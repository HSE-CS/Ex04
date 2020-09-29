#include <iostream>
#include "task1.h"

int main() {
	const char* arr[6]{ "nnn", "uuu", "kkk", "ppp", "sss", "ttt" };
	qsort(arr, 6, sizeof(const char*), comp3);
	return 0;
}