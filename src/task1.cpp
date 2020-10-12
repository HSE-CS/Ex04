#include "task1.h"

int comp1(const void* a, const void* b) {
	return (*(int*)a - *(int*)b);
}

int comp2(const void* a, const void* b) {
	return ((int)(*(double*)a - *(double*)b));
}

int comp3(const void* a, const void* b) {
	return(strcmp((char*)a, (char*)b));
}

int comp4(const void* a, const void* b) {
	return (strlen((char*)a) - strlen((char*)b));
}

int comp5(const void* a, const void* b) {
	int k1 = 0;
	int k2 = 0;
	for (int i = 0; i < strlen((char*)a); i++) {
		if (((char*)a)[i] == ' ') k1++;
	}
	for (int i = 0; i < strlen((char*)b); i++) {
		if (((char*)b)[i] == ' ') k2++;
	}
	return (k1 - k2);
}

int comp6(const void* a, const void* b) {
	return ((int)(unsigned((Person*)a->age) - unsigned((Person*)b->age)));
}

void Proga(int sizeNew) {
	double arr[LARGE_SIZE];
	for (int i = 0; i < sizeNew; i++) {
		//scanf("%l", arr[i]);
		cout << arr[i] << "%t";
	}
	cout << "\n";
	srand(time(nullptr));
	// генерируем случайные данные
	generate(arr, arr + (sizeNew), rnd());

	// засекаем врем€
	//time_t start = clock();
	// выполн€ем сортировку, использу€ функцию qsort
	qsort(arr, sizeNew, sizeof(int), comp2);
	for (int i = 0; i < sizeNew; i++) {
		cout << arr[i] << "\t";
	}
}
