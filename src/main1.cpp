#include <iostream>
#include <cstdlib>
#include "task1.h"
using namespace std;

int main() {
	const size_t n = 6;
	const char* arr[n]{ "f f f  f f", " f f f 2", "f ", "f  f", "v v v ", " f f fr r r " };
	qsort(arr, n, sizeof(const char*), comp5);
	for (int i = 0; i < n; i++) {
		cout << arr[i] << endl;
	}
	return 0;
}