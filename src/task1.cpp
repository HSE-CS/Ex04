#include "task1.h"
#include <cstring>

int comp1(const void* a, const void* b) {
	return *(int*)a - *(int*)b;
}

int comp2(const void* a, const void* b) {
	if (*(double*)a > * (double*)b) {
		return 1;
	}
	if (*(double*)a == *(double*)b) {
		return 0;
	}
	if (*(double*)a < *(double*)b) {
		return -1;
	}
}

int comp3(const void* a, const void* b) {
	return strcmp(*(char**)a, *(char**)b);
}

int comp4(const void* a, const void* b) {
	return static_cast<int>( strlen(*(char**)a) - strlen(*(char**)b) );
}

int comp5(const void* a, const void* b) {
	int _space1 = 0;
	int _space2 = 0;

	for (int i = 0; (*(char**)a)[i] != '\0'; i++) {
		if ( (*(char**)a)[i] == ' ' ) {
			_space1++;
		}
	}

	for (int i = 0; (*(char**)b)[i] != '\0'; i++) {
		if ((*(char**)b)[i] == ' ') {
			_space2++;
		}
	}

	return _space1 - _space2;
}

int comp6(const void* a, const void* b) {

	return static_cast<int>( ((Person*)a)->age - ((Person*)b)->age );

}
