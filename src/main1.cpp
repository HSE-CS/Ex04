#include <iostream>
#include "task1.h"

int main() {
	int *a = new int(155), *b = new int(10);
	double * da = new double(9.889), * db = new double(9.888);
	Person* man = new Person{ "Andrew", 42 }, * woman = new Person{ "Yulia", 34 };
	const char** str = new const char * ("Hellow");
	const char** str1 = new const char * ("Hello");
	cout << "comp1: " << comp1(a, b) << endl;
	cout << "comp2: " << comp2(da, db) << endl;
	cout << "comp3: " << comp3(str, str1) << endl;
	cout << "comp4: " << comp4(str, str1) << endl;
	cout << "comp5: " << comp5(str, str1) << endl;
	cout << "comp6: " << comp6(man, woman) << endl;
}