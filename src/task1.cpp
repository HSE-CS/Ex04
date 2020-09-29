#include <iostream>
#include "task1.h"

int comp1(int one, int two) {
	return (one > two) - (two > one);
}

int comp2(double one, double two) {
	return (one > two) - (two > one);
}

int comp3(const char* one, const char* two) {
	int i(0);
	while (one[i] != '\0' || two[i] != '\0') {
		if (one[i] != two[i]) return -1;
		else i++; 
	}
	return 0;
}

int comp4(const char* one, const char* two) {
	int size1 = strlen(one), size2 = strlen(two);
	return (size1 > size2) - (size2 > size1);
}

int comp5(const char* one, const char* two) {
	int spaces1(0), spaces2(0);
	for (size_t i = 0;one[i] != '\0'; i++)
	{
		if (one[i] == ' ') spaces1++;
	}
	for (size_t i = 0; two[i] != '\0'; i++)
	{
		if (two[i] == ' ') spaces2++;
	}
	return (spaces1 > spaces2) - (spaces2 > spaces1);
}

int comp6(Person one, Person two) {
	return (one.age > two.age) - (two.age > one.age);
}