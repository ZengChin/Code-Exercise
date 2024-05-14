#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//OJÌâ
typedef struct list
{
	int data;
	struct list* next;

}SL;
SL* fan(SL* head)
{
	SL* slow, * fast;
	slow = head;
	fast = head;
	while (fast)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (fast = slow)
		{
			SL* meet = slow;
			while (head != meet)
			{
				head = head->next;
				meet = meet->next;
			}
			return meet->next;
		}
	}
	return NULL;
}
int main()
{

}