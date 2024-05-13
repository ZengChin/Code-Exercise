#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
typedef struct list
{
	int data;
	struct list* next;
}SL;
int main()
{
	//SL* p = malloc(sizeof(SL));
	//SL* p1 = malloc(sizeof(SL));
	SL* p, *p1;
	p = p1 = (SL*)malloc(sizeof(SL));
	SL* p2 = (SL*)malloc(sizeof(SL));
	p = NULL;
	//p1->data = 2;
	//p2->data = 3;
	//p1->next = p2;
	//p2->next = p;
	//p->data = 10;
	//p->next = NULL;
	return 0;
}