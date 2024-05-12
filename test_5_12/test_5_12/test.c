#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
typedef struct list
{
	int data;
	struct list* next;
}SL;
SL* Partition(SL* head, int val)
{
	SL* cur = head;
	SL* smallHead = NULL;
	SL*smallTail=NULL;
	SL* bigHead = NULL;
	SL*bigTail=NULL;
	while (head)
	{
		if (head->data <= val)
		{
			cur = head;
			smallTail = cur;
			if (smallHead == NULL)
			{
				smallHead = cur;
				smallHead->next = smallTail;
			}
			else
			{
				
			}
		}
		else
		{
			if (bigTail == NULL)
			{
				bigHead = cur;
				bigHead->next = bigTail;
			}
			else
			{
				bigTail = cur;
			}
		}
		cur = cur->next;
	}
	smallTail->next = bigTail;
	return smallTail;
}
int main()
{
	SL* n1 = malloc(sizeof(SL));
	SL* n2 = malloc(sizeof(SL));
	SL* n3 = malloc(sizeof(SL));
	SL* n4 = malloc(sizeof(SL));
	SL* n5 = malloc(sizeof(SL));
	SL* n6 = malloc(sizeof(SL));

	n1->data = 2;
	n2->data = 3;
	n3->data = 5;
	n4->data = 1;
	n5->data = 7;
	n6->data = 2;

	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = n5;
	n5->next = n6;
	n6->next = NULL;

	SL*tmp=Partition(n1, 4);	

	return 0;
}