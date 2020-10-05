#include "../include/task1.h"
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main() {
    // int arr1[] = {1, 6, 5, 2, 3, 9, 4, 7, 8}; 
    // int size1 = sizeof(arr1) / sizeof(arr1[0]); 
    // qsort((void*)arr1, size1, sizeof(arr1[0]), comp1); 
    // for(int i = 0; i < size1; i++)
    //     cout<<arr1[i]<<" ";
    // cout<<endl;

    const size_t n = 6;
	double arr[n]{4.0, 3.0, 2.4, 2.5, 2.1, -1};
	double expected[n]{-1, 2.1, 2.4, 2.5, 3.0, 4.0};
    qsort(arr,n,sizeof(double),comp2);
    for(int i = 0; i < n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;


    // const char *arr3[4] = { "Blue", "Red", "Orange", "Yellow" };
    // int size3 = sizeof(arr3) / sizeof(arr3[0]);
    // qsort((void*)arr3, size3, sizeof(arr3[0]), comp3);
    // for(int i = 0; i < size3; i++)
    //     cout<<arr3[i]<<" ";
    // cout<<endl;

    // const char *arr4[4] = { "Blue", "Red", "Orange", "Yellow" };
    // int size4 = sizeof(arr4) / sizeof(arr4[0]);
    // qsort((void*)arr4, size4, sizeof(arr4[0]), comp4);
    // for(int i = 0; i < size4; i++)
    //     cout<<arr4[i]<<" ";
    // cout<<endl;

    // const char *arr5[4] = { "B l ue", "Red", "O r a nge", "Y e l l ow" };
    // int size5 = sizeof(arr5) / sizeof(arr5[0]);
    // qsort((void*)arr5, size5, sizeof(arr5[0]), comp5);
    // for(int i = 0; i < size5; i++)
    //     cout<<arr5[i]<<"   ";
    // cout<<endl;

    // const size_t n = 3;
	// Person arr[n]{{"a",34},{"b",48},{"c",22}};
	// qsort(arr,n,sizeof(Person),comp6);
    return 0;
}