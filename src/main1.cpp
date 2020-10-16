#include <iostream>
#include "task1.h"
#include <algorithm>
#include <cstring>

using namespace std;

int main() {
	double a[100] = {65.4,6.4,5.6,4.5,64.5,6,5.4,6,4.5,6,4.52,5.5,34.5,2.3,4,1.2};
	qsort(a, 16, sizeof(int), comp6);
	for (int i = 0; i < 16; ++i) {
		cout << a[i] << endl;
	}
	return 0;
}