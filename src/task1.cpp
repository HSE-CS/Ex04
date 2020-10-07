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
	return strcmp((const char*)a, (const char*)b);
}

int comp4(const void* a, const void* b) {
	return static_cast<int>( strlen((const char*)a) - strlen((const char*)b) );
}

int comp5(const void* a, const void* b) {
	int _space1 = 0;
	int _space2 = 0;

	for (int i = 0; ((const char*)a)[i] != '\0'; i++) {
		if ( ((const char*)a)[i] == ' ' ) {
			_space1++;
		}
	}

	for (int i = 0; ((const char*)b)[i] != '\0'; i++) {
		if (((const char*)b)[i] == ' ') {
			_space2++;
		}
	}

	return _space1 - _space2;
}

int comp6(const void* a, const void* b) {

	return static_cast<int>( ((Person*)a)->age - ((Person*)b)->age );

}
