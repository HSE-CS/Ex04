#include "task1.h"

using namespace std;

int comp1(const void *a, const void *b) {
    return *(int *) a - *(int *) b;
}

int comp2(const void *a, const void *b) {
    double c = *(double *) a - *(double *) b;
    if (c > 0.0)
        return 1;
    if (c < 0.0)
        return -1;
    else
        return 0;
}

int comp3(const void *a, const void *b) {
    return strcmp(*(char **) a, *(char **) b);
}

int comp4(const void *a, const void *b) {
    return (int)(strlen(*(char**)a) - strlen(*(char**)b));
}

int comp5(const void *a, const void *b) {
    char* s1 = *(char**) a;
    char* s2 = *(char**) b;
    unsigned int val1 = 0, val2 = 0;
    for (int i = 0; i < strlen(s1); i++){
        if (s1[i] == ' ')
            val1++;
    }
    for (int i = 0; i < strlen(s2); i++){
        if (s2[i] == ' ')
            val2++;
    }
    return (int)(val1-val2);

}

int comp6(const void *a, const void *b) {
    return (int)( ((Person*)a)->age - ((Person*)b)->age );
}
