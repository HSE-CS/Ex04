//
// Created by nikita on 29.09.2020.
//

#include "task1.h"

int main()
{
    const size_t n = 6;
    Person arr[n]{{"a",34},{"b",48},{"c",22}};
    qsort(arr,n,sizeof(Person),comp6);
    for(int i = 0; i < n; i++)
    {
        printf("%d | ", arr[i].age);
    }
    return 0;
}