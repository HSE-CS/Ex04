#include "task1.h"
#include <iostream>
using namespace std;

int main() {
	Person a{ "a", 20 }, b{ "b", 40 };
	cout << comp6(&a, &b) << endl;
}