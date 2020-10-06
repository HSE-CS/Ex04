#include<math.h>
#include<iostream>
#include<stdio.h>

#include"task1.h"

using namespace std;

struct Person
{
	string   name;
	unsigned age;
};

int main() {
	
	const size_t n = 6;
	const char* arr[n]{ "nnn", "uuu", "kkk", "ppp", "sss", "ttt" };
	qsort(arr, n, sizeof(const char*), comp3);
	for (int i = 0; i < n; i++) {
		cout << arr[i] << ' ';
	}
	system("Pause");
	return 0;
}