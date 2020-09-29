#include <iostream>
#include "task1.h"

int main() {
	int a(10), b(5);
	double da(690.87), db(690.87);
	Person man = { "Andrew", 26 };
	Person woman = { "Yulia", 84 };
	const char* str = "Hellow";
	const char* str1 = "Hellow";
	cout << "comp1: " << comp1(a, b) << endl;
	cout << "comp2: " << comp2(da, db) << endl;
	cout << "comp3: " << comp3(str, str1) << endl;
	cout << "comp4: " << comp4(str, str1) << endl;
	cout << "comp5: " << comp5(str, str1) << endl;
	cout << "comp6: " << comp6(man, woman) << endl;
}