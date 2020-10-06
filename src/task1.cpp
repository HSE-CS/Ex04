#include "task1.h"

int spnum(const char* s){
    int count = 0;
    char* p = const_cast<char *>(s);
    while( (p = strchr(p, ' ')) ){
        ++count;
        ++p;
    };
    return count;
}

int comp1 (const void* a, const void* b) {
    return (*(int*) a - *(int*) b);
}

int comp2 (const void* a, const void* b) {
    return (int) (ceil(*(double*) a - *(double*) b));
}

int comp3 (const void* a, const void* b) {
    return strcmp(*(const char**) a, *(const char**) b);
}

int comp4 (const void* a, const void* b) {
    return (int) (strlen(*(const char**) a) - strlen(*(const char**) b));
}

int comp5 (const void* a, const void* b) {
    return spnum(*(const char**) a) - spnum(*(const char**) b);
}

int comp6 (const void* a, const void* b){
    return (int) ((*(Person*) a).age - (*(Person*) b).age);
}