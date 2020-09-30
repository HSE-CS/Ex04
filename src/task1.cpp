#include"task1.h"
#include<iostream>
using namespace std;


int comp1( const void* a, const void* b)
{
	return ( *(int*)a - *(int*)b );
}
int comp2(const void* a, const void* b)
{
	if ( ( *(double*)a - *(double*)b ) > 0)
		return 1;
	if ( ( *(double*)a - *(double*)b ) < 0)
		return -1;
	if ( ( *(double*)a - *(double*)b ) == 0)
		return 0;
}

int comp3(const void* a, const void* b)
{
	return strcmp( ( *(const char**)a ), ( *(const char**)b) ) ;
}
int comp4(const void* a, const void* b)
{
       return ( strlen(*(const char**)a) -  strlen(*(const char**)b) );
}
int comp5(const void* a, const void* b)
{
	const char* c_a = *(const char**)a;
	const char* c_b = *(const char**)b;

	int k = 0;

	for ( int i = 0; i < strlen( c_a ) ; i++ )
	{
		if (c_a[i] == ' ') k++;
	}

	int n = 0;

	for (int j = 0; j < strlen(c_b); j++)
		if (c_b[j] == ' ') n++;

	return k - n;
}
int comp6(const void* a, const void* b)
{

	return (((struct Person*)a)->age) - (((struct Person*)b)->age);

}