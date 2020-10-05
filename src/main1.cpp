#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include "task1.h"


using namespace std;


int main()
{
    int j = 0;
    int* arr = (int*)malloc(sizeof(int) * LARGE_SIZE);
    srand(time(nullptr));
    generate(arr, arr + LARGE_SIZE, rnd());
    qsort(arr, LARGE_SIZE, sizeof(int), comp1);
    return 0;
}