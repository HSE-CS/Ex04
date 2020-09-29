#include "task1.h"
#include <cstdlib>

int main()
{
	const size_t n = 6;
	bool flag1;
	int* arr1 = new int[n] {5, 3, 2, 4, 1, 6};
	qsort(arr1, n, sizeof(int), comp1);
	int* expected1 = new int[n] {1, 2, 3, 4, 5, 6};
	for (size_t i = 0; i < n; i++)
		if (expected1[i] == arr1[i])
			flag1 = true;
		else
		{
			flag1 = false;
			break;
		}
	printf("comp1 %B\n", flag1);
	delete[] arr1;
	delete[] expected1;

	bool flag;
	double arr2[n]{ 4.0, 3.0, 2.4, 2.5, 2.1, -1 };
	double expected2[n]{ -1, 2.1, 2.4, 2.5, 3.0, 4.0 };
	qsort(arr2, n, sizeof(double), comp2);
	for (size_t i = 0; i < n; i++)
		if (expected1[i] == arr1[i])
			flag = true;
		else
		{
			flag = false;
			break;
		}
	printf("comp2 %B\n", flag);
	delete[] arr2;
	delete[] expected2;


	const char* arr3[n]{ "nnn", "uuu", "kkk", "ppp", "sss", "ttt" };
	qsort(arr3, n, sizeof(const char*), comp3);
	const char* expected3[n]{ "kkk", "nnn", "ppp", "sss", "ttt", "uuu" };
		printf("comp3 %B\n", strcmp(*expected3, *arr3));
	delete[] arr3;
	delete[] expected3;


	const char* arr4[n]{ "fffff", "fff2", "f", "ff", "vvv", "fffrrr" };
	qsort(arr4, n, sizeof(const char*), comp4);
	const char* expected4[n]{ "f", "ff", "vvv", "fff2", "fffff", "fffrrr" };
		printf("comp4 %B\n", strcmp(*expected4, *arr4));
	delete[] arr4;
	delete[] expected4;

	
	const char* arr5[n]{ "f f f  f f", " f f f 2", "f ", "f  f", "v v v ", " f f fr r r " };
	qsort(arr5, n, sizeof(const char*), comp5);
	const char* expected5[n]{ "f ", "f  f", "v v v ", " f f f 2", "f f f  f f", " f f fr r r " };
		printf("comp5 %B\n", strcmp(*expected5, *arr5));
	delete[] arr5;
	delete[] expected5;


	const size_t k = 3;
	bool flag6 = true;
	Person arr[k]{ {"a",34},{"b",48},{"c",22} };
	qsort(arr, k, sizeof(Person), comp6);
	Person expected[k]{ {"c",22},{"a",34},{"b",48} };

	for (size_t i = 0; i < k; i++)
	{
		if (expected[i].name != arr[i].name)
		{
			flag6 = false;
			break;
		}
		if (expected[i].age != arr[i].age)
		{
			flag6 = false;
			break;
		}
	}
	printf("comp6 %B\n", flag6);
}
