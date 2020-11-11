return (*(int*)a - *(int*)b);
}
int comp2(const void* a, const void* b) {
	if (*(double*)a > * (double*)b)
		return -1;
	else if (*(double*)a < *(double*)b) return 1;
	else return 0;
	return (*(double*)a - *(double*)b) > 0.0 ? 1 : -1;
}
int comp3(const void* a, const void* b) {
	return strcmp(*((char**)a), *((char**)b));;