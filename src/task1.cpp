#include<math.h>
#include<iostream>
#include<stdio.h>

#include"task1.h"
using namespace std;


struct Person
{
	string   name;
	unsigned age;
};


int lenstr(const char* a) {
	return strlen(a);
}
 
int prob(const char* a) {
	int k = 0;
	for (int i = 0; i < lenstr(a); i++) {
		if (a[i] == ' ')
			k++;
	}
	return k;
}




int comp1(const void* a, const void* b) {
	return (*(int*) a > *( int* )b);
}
int comp2(const void* a, const void* b) {
	return (*(double*)a > *(double*)b);
}
int comp3(const void* aa, const void* bb) {
	const char* a = *(const char**)aa;
	const char* b = *(const char**)bb;
	if (lenstr(a) < lenstr(b)) {
		for (int i = 0; i < lenstr(a); i++) {
			if (a[i] < b[i]) {
				return false;
			}
			if (a[i] > b[i]) {
				return true;
			}
		}
		return true;
	}
	else {
		for (int i = 0; i < lenstr(b); i++) {
			if (a[i] < b[i]) {
				return false;
			}
			if (a[i] > b[i]) {
				return true;
			}
		}
		return true;
	}
}

int comp4(const void* a, const void* b) {
	return (strlen(*(const char**)a) > strlen(*(const char**)b));
}

int comp5(const void* a, const void* b) {
	return (prob(*(const char**)a) > prob(*(const char**)b));
}

int comp6(const void* a, const void* b) {
	Person aa = *(Person*)a;
	Person bb = *(Person*)b;
	return (aa.age > bb.age);
}



