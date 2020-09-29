using namespace std;
#include <iostream>
#include "task1.h"
#include <string>

int main(){
    const size_t n = 6;
    double arr[n]{4.0, 3.0, 2.4, 2.5, 2.1, -1};
    double expected[n]{-1, 2.1, 2.4, 2.5, 3.0, 4.0};
    qsort(arr,n,sizeof(double),comp2);

    for(size_t i = 0; i < n; i++)
        if (expected[i] != arr[i])
            cout << "error2"<<endl;

    return 0;
}