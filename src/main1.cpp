//
//  main1.cpp
//  cpp_exmp
//
//  Created by Сапожников Андрей Михайлович on 22.09.2020.
//  Copyright © 2020 Сапожников Андрей Михайлович. All rights reserved.
//

#include <stdio.h>
#include "task1.h"

#include <iostream>
#include <cstdlib>


using namespace std;

int main() {
    const size_t n = 6;
    int *arr = new int[n]{5, 3, 2, 4, 1, 6};
    qsort(arr,n,sizeof(int),comp1);
    cout << "END";
    return 0;
}
