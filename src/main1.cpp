#include <iostream>
#include "task1.h"

using namespace std;

int main() 
{
	//test1
	/*const size_t n = 6;
	int *arr = new int[n]{5, 3, 2, 4, 1, 6};
	qsort(arr, n, sizeof(int), comp1);
	int *expected = new int[n]{1, 2, 3, 4, 5, 6};
	for (size_t i = 0; i < n; i++)
		cout << expected[i] << ";" << arr[i] << endl;		
	delete[] arr;
	delete[] expected;*/


	//test2
	/*const size_t n = 6;
	double arr[n]{4.0, 3.0, 2.4, 2.5, 2.1, -1};
	double expected[n]{-1, 2.1, 2.4, 2.5, 3.0, 4.0};
	qsort(arr, n, sizeof(double), comp2);
	for (size_t i = 0; i < n; i++)
		cout << expected[i] << ";" << arr[i] << endl;*/


	//test3
	/*const size_t n = 6;
	const char* arr[n]{"nnn", "uuu", "kkk", "ppp", "sss", "ttt"};
	qsort(arr, n, sizeof(const char*), comp3);
	const char* expected[n]{"kkk", "nnn", "ppp", "sss", "ttt", "uuu"};
	for (size_t i = 0; i < n; i++)
		cout << expected[i] << ";" << arr[i] << endl;*/


	//test4
	/*const size_t n = 6;
	const char* arr[n]{"fffff", "fff2", "f", "ff", "vvv", "fffrrr"};
	qsort(arr, n, sizeof(const char*), comp4);
	const char* expected[n]{"f", "ff", "vvv", "fff2", "fffff", "fffrrr"};
	for (size_t i = 0; i < n; i++)
		cout << expected[i] << ";" << arr[i] << endl;*/


	//test5
	/*const size_t n = 6;
	const char* arr[n]{"f f f  f f", " f f f 2", "f ", "f  f", "v v v ", " f f fr r r "};
	qsort(arr, n, sizeof(const char*), comp5);
	const char* expected[n]{"f ", "f  f", "v v v ", " f f f 2", "f f f  f f", " f f fr r r "};
	for (size_t i = 0; i < n; i++)
		cout << expected[i] << ";" << arr[i] << endl;*/


	//test6
	/*const size_t n = 3;
	Person arr[n]{{"a", 34}, { "b", 48 }, { "c", 22 }};
	qsort(arr, n, sizeof(Person), comp6);
	Person expected[n]{{"c", 22}, { "a", 34 }, { "b", 48 }};*/

	return 0;
}