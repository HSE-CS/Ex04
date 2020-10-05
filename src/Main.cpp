#include "task1.h"
#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int arr[LARGE_SIZE];
    int arr_copy[LARGE_SIZE];
    int n;
    cin >> n;
    int size = 100;

    for (int i = 0; i < n; i++)
    {
        // ������������ �� �������
        srand(time(nullptr));
        // ���������� ��������� ������
        generate(arr, arr + size, rnd());
        copy(arr, arr + size, arr_copy);
        // �������� �����
        time_t start = clock();
        // ��������� ����������, ��������� ������� qsort
        qsort(arr, size, sizeof(int), comp);
        // C, C++
        cout << size << " " << static_cast<double>(clock() - start) / CLOCKS_PER_SEC << " " << static_cast<double>(clock() - start) / CLOCKS_PER_SEC << "\n";
        // ����� �������� �����
        start = clock();
        // ��������� ����������, ��������� �������� �++
        sort(arr_copy, arr_copy + size);
        // cout  << static_cast<double>(clock() - start) / CLOCKS_PER_SEC << "\n";
        // cout << "\n";
        size = size + 10000;
    }

    return 0;
}