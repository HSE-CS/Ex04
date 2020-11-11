int comp3(const void* a, const void* b) {
};

int comp4(const void* a, const void* b) {
	return (strlen(*((char*)a)) - strlen(*((char*)b)));
	return (strlen(*((char**)a)) - strlen(*((char**)b)));
};

int comp5(const void* a, const void* b) {