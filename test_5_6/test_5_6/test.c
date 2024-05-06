#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 struct ListNode
{
	int data;
	struct ListNode* next;
};
struct ListNode* removeElements(struct ListNode* head, int val)
{
	struct ListNode* cur = head;
	if (cur == NULL)
	{
		return NULL;
	}
	else
	{
		while (head->data == val)
		{
			
		}
		head = head->next;
	}
}
void createNode(struct ListNode**ps,int x)
{
	struct ListNode* newcode = malloc(sizeof(struct ListNode));
	newcode->data = x;
	newcode->next = NULL;
	if(*ps==NULL)
	{
		*ps = newcode;
	}
	else
	{
		struct ListNode* cur = *ps;
		while(cur->next)
		{
			cur = cur->next;
		}
		cur->next = newcode;
	}

}
void codeprint(struct ListNode* ps)
{
	if (ps == NULL)
	{
		printf("NULL");
	}
	while (ps)
	{
		printf("%d ", ps->data);
		ps = ps->next;
	}
}
int main()
{
	struct ListNide* plist = NULL;
	createNode(&plist, 1);
	createNode(&plist, 2);
	createNode(&plist, 6);
	createNode(&plist, 3);
	createNode(&plist, 4);
	createNode(&plist, 1);
	createNode(&plist,6);
	codeprint(plist);
	//removeElements(plist, 6);
	
}