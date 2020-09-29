#include"task1.h"
#include<iostream>

using namespace std;
int comp1( const void* x, const void* y)
{
	return *(int*)x - *(int*)y;
}
int comp2(const void* x, const void* y)
{

	return *(int*)x - *(int*)y;
}
int comp3(const void* str1, const void* str2)
{
	return strcmp(*(const char**)str1, *(const char**)str2);
}
int comp4(const void* str1, const void* str2)
{
	int l1, l2;
	l1 = strlen(*(const char**)str1);
	l2 = strlen(*(const char**)str2);
	return l1 - l2;

}
int comp5(const void* str1, const void* str2)
{
	const char* str_1 = *(const char**)str1;
	const char* str_2 = *(const char**)str2;
	int k1 = 0;
	int k2 = 0;
	int i = 0;
	while ( str_1[i] != '\0' && str_2[i] != '\0')
	{
		if (str_1[i] == ' ') k1++;
		if (str_1[i] == ' ') k2++;
	}
	return k1-k2;


}
int comp6(const void* p1, const void* p2)
{

	return ((((struct Person*)p1)->age) - (((struct Person*)p2)->age));

}