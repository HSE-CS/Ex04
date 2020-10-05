#include <iostream>
#include "task1.h"

int main() {
    const int n = 6;
    const char* arr[n]{ "nnn", "uuu", "kkk", "ppp", "sss", "ttt" };
    qsort(arr, n, sizeof(const char*), comp3);
    const char* expected[n]{ "kkk", "nnn", "ppp", "sss", "ttt", "uuu" };

    cout << strcmp(arr[1], arr[0]);
    return 0;
}