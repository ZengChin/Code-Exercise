#include<stdio.h>
#include<string.h>
int main()
{
	char arr[] = ("memset is programer must know function.");
	memset(arr, '----', 6);
	printf("%s", arr);
	return 0;
}