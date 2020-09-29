//
// Created by toliman on 29.09.2020.
//


// #include <bits/stdc++.h>
#include <cmath>

#include "task1.h"

using namespace std;

int comp1(const void *a, const void *b) {
    return *(int *) a - *(int *) b;
}

int comp2(const void *a, const void *b) {
    double x, y;
    x = *(double *) a;
    y = *(double *) b;
    double eps = 1e-10;
    if (fabs(x - y) < eps) return 0;
    if (x - y > eps) return 1;
    return -1;
}

int comp3(const void *a, const void *b) {
    return strcmp((char *) a, (char *) b);
}

int comp4(const void *a, const void *b) {
    return (int) (strlen((char *) a) - strlen((char *) b));
}

int comp5(const void *a, const void *b) {
    // std::string x = reinterpret_cast<const char *>(*(char *) a);

    string s = (const char *) a;
    string t = (const char *) b;
    int cnts = 0, cntt = 0;
    for (auto x: s) cnts += (x == ' ' ? 1 : 0);
    for (auto x: t) cntt += (x == ' ' ? 1 : 0);
    return cnts - cntt;
}

int comp6(const void *a, const void *b) {
    auto x = (Person *) a;
    auto y = (Person *) b;
    return (int) (x->age - y->age);
}
