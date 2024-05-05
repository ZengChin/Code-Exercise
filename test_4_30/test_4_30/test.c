#define _CRT_SECURE_NO_WARNINGS
#include"SList.h"
//#include<stdio.h>
//int main()
//{
//	int x = 0;
//	char a = 'e';
//	float f = 2.12f;
//	double d = 2.1111;
//	long l = 23458;
//	int* px = &x;
//	char* pa = &a;
//	float* pf = &f;
//	double* pd = &d;
//	long* pl = &l;
//	printf(" %p\n %p\n %p\n %p\n %p\n", px, pa, pf, pd,pl);
//	//printf("%d\n%d\n%d\n%d\n%d\n", sizeof(px), sizeof(pa), sizeof(pf), sizeof(pd), sizeof(pl));
//	printf("%d", sizeof(x));
//	return 0;
//}
void test1()
{
	SL* plist = NULL;
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 4);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 5);
	SListPushBack(&plist, 6);

	//SListPopBack(&plist);
	//SListPopFront(&plist);

	//SListPushFront(&plist, -1);
	//SListPushFront(&plist, -2);
	//SListPushFront(&plist, -3);
	//SListPushFront(&plist, -4);
	//SL* pr = SListFind(plist, 3);
	//SListPrintf(plist);
	//while(pr)
	//{		
	//	if(pr)
	//	pr->data = 30;
	//	printf("%p ", pr);
	//	pr=SListFind(pr->next, 3);

	//}
	//SListPrintf(plist);

	SL* pos = SListFind(plist, 6);
	SListInsert(&plist, pos, 30);
	SListPrintf(plist);
}
int main()
{
	test1();
	return 0;
}