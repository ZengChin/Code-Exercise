#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<stdio.h>
int main()
{
	char arr[] = { "the best way£¡" };
	memset(arr, 'o', 3);
	printf("%s", arr);
	return 0;
}