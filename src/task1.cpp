#include "task1.h"

int comp1(const void* a, const void* b) {
	return (*(int*)a - *(int*)b);
}

int comp2(const void* a, const void* b) {
	if (*(double*)a - *(double*)b < 0.0000) {
		return -1;
	}
	else if (*(double*)a - *(double*)b > 0.0000) {
		return 1;
	}
	else {
		return 0;
	}
}

int comp3(const void* s1, const void* s2) {
	return (strcmp(*(char**)s1, *((char**)s2)));
}

int comp4(const void* s1, const void* s2) {
	return (strlen(*((char**)s1)) - strlen(*((char**)s2)));
}

int comp5(const void* s1, const void* s2) {
	unsigned int len1 = 0, len2 = 0;
	for (unsigned int i = 0; i < strlen(*((char**)s1)); i++)
	{
		if ((*((char**)s1))[i] == ' ')
			len1++;
	}
	for (unsigned int i = 0; i < strlen(*((char**)s2)); i++)
	{
		if ((*((char**)s2))[i] == ' ')
			len2++;
	}
	return (len1 - len2);
};

int comp6(const void* p1, const void* p2) {
	return ((Person*)p1)->age - ((Person*)p2)->age;
}
