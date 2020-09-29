#include "task1.h"

int main(){
    int intArr[]{9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int arrSize = sizeof(intArr) / sizeof(int);
    qsort(intArr, arrSize, sizeof(int), comp1);
    cout << "intArr(comp1):\n";
    for (int i = 0; i < arrSize; ++i) {
        cout << intArr[i] << ' ';
    } cout << endl << endl;

    double doubleArr[]{1135.12, 231.6513, 666.66, 20.0, 51.78, 0.2};
    arrSize = sizeof(doubleArr) / sizeof(double);
    qsort(doubleArr, arrSize, sizeof(double ), comp2);
    cout << "doubleArr(comp2):\n";
    for (int i = 0; i < arrSize; ++i) {
        cout << doubleArr[i] << ' ';
    }cout << endl << endl;

    arrSize = 5;
    char stringArr[][50]{"qwe", "flvmef", "vefkvef", "vefkovek", "wefwe"};
    qsort(stringArr, arrSize, 50, comp3);
    cout << "stringArr(comp3):\n";
    for (int i = 0; i < arrSize; ++i) {
        cout << stringArr[i] << ' ';
    }cout << endl << endl;

    arrSize = 5;
    qsort(stringArr, arrSize, 50, comp4);
    cout << "stringArr(len)(comp3):\n";
    for (int i = 0; i < arrSize; ++i) {
        cout << stringArr[i] << ' ';
    }cout << endl << endl;

    char stringArr3[][50]{"I go to HSE", "I gonna HSE", "kek", "!     !", "_"};
    arrSize = 5;
    qsort(stringArr3, arrSize, 50, comp5);
    cout << "stringArr(spaceCounter)(comp):\n";
    for (int i = 0; i < arrSize; ++i) {
        cout << stringArr3[i] << ';';
    }cout << endl << endl;

    Person people[]{{"Seray", 999},
                     {"Dmitry", 666},
                     {"Ksenia", 19},
                    {"SSSSSSSSSS", 0}};
    arrSize = sizeof(people) / sizeof(Person);
    qsort(people, arrSize, sizeof(Person), comp6);
    for (int i = 0; i < arrSize; ++i) {
        cout << people[i].name << ' ' << people[i].age << endl;
    } cout << endl;

    return 0;
}