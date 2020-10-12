//
//  main.cpp
//  main1
//
//  Created by Julia Rogozyan on 12.10.2020.
//  Copyright © 2020 Julia Rogozyan. All rights reserved.
//


#include "task1.h"
#include <algorithm>
#include <string>
#include <iostream>
#include <time.h>
#include <string.h>

using namespace std;
#define N 10
#define strN 2
#define persN 2

double doubleRand(double a, double b) {
    return ((b - a) * (double)rand() / (double)RAND_MAX);
}

int main() {

    int arrayInt[N] = { 0 };
    double arrayDouble[N] = { 0 };
    srand(time(NULL));
    cout << "Int comp \n";
    for (int i = 0; i < N; i++) {
        arrayInt[i] = rand() % 100;
        cout << arrayInt[i] << "\t";
    }

    cout << "\n";
    qsort(arrayInt, N, sizeof(int), comp1);

    for (int i = 0; i < N; i++) {
        cout << arrayInt[i] << "\t";
    }

    cout << "\n";

    cout << "=====================================\nDouble comp \n";
    for (int i = 0; i < N; i++) {
        arrayDouble[i] = doubleRand(0, 100);
        cout << (double)arrayDouble[i] << "\t";
    }

    cout << "\n";
    qsort(arrayDouble, N, sizeof(double), comp2);

    for (int i = 0; i < N; i++) {
        cout << (double)arrayDouble[i] << "\t";
    }

    cout << "\n\nLex comp \n";

    const char str1[] = "aaa";
    const char str2[] = "aab";

    const char* strArr[strN] = { str1,str2 };

    for (int i = 0; i < strN; i++) {
        cout << strArr[i] << "\t";
    }
    cout << "\n";
    qsort(strArr, 2, sizeof(char*), comp3);

    for (int i = 0; i < strN; i++) {
        cout << strArr[i] << "\t";
    }

    cout << "\n\nLen comp \n";

    const char str3[] = "aaafasf asf sfs";
    const char str4[] = "aabfas sdf sdf sdf sdf sdf sd f";

    const char* strArr2[strN] = { str3,str4 };
    const char* strArr3[strN] = { str3,str4 };

    for (int i = 0; i < strN; i++) {
        cout << strArr2[i] << "\t";
    }
    cout << "\n";

    qsort(strArr2, 2, sizeof(char*), comp4);

    for (int i = 0; i < strN; i++) {
        cout << strArr2[i] << "\t";
    }

    cout << "\n\nSpace comp \n";

    for (int i = 0; i < strN; i++) {
        cout << strArr3[i] << "\t";
    }
    cout << "\n";
    qsort(strArr3, 2, sizeof(char*), comp5);

    for (int i = 0; i < strN; i++) {
        cout << strArr3[i] << "\t";
    }

    cout << "\n\nStruct comp \n";

    Person pers1, pers2;
    pers1.name = "Ivan";
    pers1.age = rand() % 50;

    pers2.name = "Alex";
    pers2.age = rand() % 50;

    Person arrayOfPers[persN] = { pers1,pers2 };

    for (int i = 0; i < persN; i++) {
        cout << "[" << arrayOfPers[i].name << ";" << arrayOfPers[i].age << "]\n";
    }

    qsort(arrayOfPers, persN, sizeof(Person), comp6);

    cout << "\nAfter qsort\n";
    for (int i = 0; i < persN; i++) {
        cout << "[" << arrayOfPers[i].name << ";" << arrayOfPers[i].age << "]\n";
    }

    cout << "\n\nProcess has done\n";
    return 0;
} 
