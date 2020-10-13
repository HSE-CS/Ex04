#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <string>
#include <cstring>
#include "task1.h"



int comp1( const void* a, const void* b ) {
    return ( *( int* )a - *( int* )b );
}

int comp2( const void* a, const void* b ) {
	double t=*( double* )a - *( double* )b ;
	if (t==0) return 0;
	if (t<0) return -1;
	if (t>0) return 1;
}
int comp3( const void* a, const void* b ) {
    const char** s1 = (const char**) a;
    const char** s2 = (const char**) b;
    return strcmp(*s1, *s2);
}

int comp4( const void* a, const void* b ) {
	const char** s1 = (const char**) a;
	const char** s2 = (const char**) b;
	int len1=strlen(*s1);
	int len2=strlen(*s2);
	if (len1==len2)
		return 0;
	else
		if (len1<len2)
			return -1;
		else
			return 1;
}

static int countSpaces(const char *s) {
    int counter = 0;
    for (int i = 0; i < strlen(s); i++)
        if (s[i] == ' ')
            counter++;
    return counter;
}

int comp5(const void *a, const void *b) {
    return countSpaces(*(const char **) a) - countSpaces(*(const char **) b);
}
int comp6(const void *a, const void *b) 

{

    unsigned l = ((struct Person *)a)->age;

    unsigned r = ((struct Person *)b)->age; 

    return (l - r);

} 