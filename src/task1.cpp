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

int comp5( const void* a, const void* b ) {
	const char** s1 = (const char**) a;
	const char** s2 = (const char**) b;
	int len1=0;
	for (int j=0;j<strlen(*s1);j++){
		if (**s1+j==' ') len1++;
	}
	int len2=0;
	for (int j=0;j<strlen(*s2);j++){
		if (**s2+j==' ') len2++;
	}
	if (len1==len2)
		return 0;
	else
		if (len1<len2)
			return -1;
		else
			return 1;
}
int comp6(const void *a, const void *b) 

{

    unsigned l = ((struct Person *)a)->age;

    unsigned r = ((struct Person *)b)->age; 

    return (l - r);

} 