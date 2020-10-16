#include <cstdlib>
#include <iostream>
#include "task1.h"

int main() {
    const int n = 3;
    int arr[n] = {2,10,5};
    qsort(arr, n, sizeof(int), comp1);

    for (int i = 0; i < n; i++)
        std::cout << arr[i] << ' ';

    return 0;
}