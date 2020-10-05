#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "task1.h"
#include <fstream>

using namespace std;


const size_t LARGE_SIZE = 100;
ofstream fout("ans.xls");

struct rnd {
    int operator()() {
        return rand() % LARGE_SIZE;
    }
};


int main() {
    int* arr = new int[LARGE_SIZE];
    double* arr1 = new double[LARGE_SIZE];
    srand(time(nullptr));
    /*for (int i = 0; i <= LARGE_SIZE; i ++) {
        generate(arr, arr + i, rnd());
        qsort(arr, LARGE_SIZE, sizeof(int), comp1);
    }*/
    for (int i = 0; i < LARGE_SIZE; i++) {
        arr1[i] = double(rand() / 100.) * pow(-1, i);
    }
    qsort(arr1, LARGE_SIZE, sizeof(double), comp2);
    //   cout << arr1[0];
    const char* a = "    ";
    const char* b = "    ";
    cout << comp3(a, b) << "\n";
    cout << comp4(a, b) << "\n";
    cout << comp5(a, b) << "\n";
    Person* list = new Person[10];
    for (int i = 0; i < 10; i++)
    {
        list[i].age = rand() % LARGE_SIZE;
        cout << list[i].age << " ";
    }
    cout << "\n";
    qsort(list, 10, sizeof(Person), comp6);
    for (int i = 0; i < 10; i++)
    {
        cout << list[i].age << " ";
    }
    /*for (int i = 0; i < LARGE_SIZE; i++)
    {
        cout << arr1[i]<< " ";
    }*/
    return 0;
}