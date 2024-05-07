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
	struct ListNode* prev = NULL;
	if (head == NULL)
	{
		return NULL;
	}
	else
	{
		prev = head;
		while(head)
		{
			if (head->data == val)
			{
				if (head == cur)
				{
					cur = head->next;
					free(prev);
					head = cur;
					prev = head;

				}
				else
				{
					prev->next = head->next;
					free(head);
					head = prev->next;
				}
			}
			else
			{
				prev = head;
				head = head->next;

			}

		}
		return cur;
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
	printf("\n");
}
void SLdestory(struct ListNode** cur)
{
	struct ListNode* next = NULL;
	struct ListNode* head = *cur;

	while (head)
	{
		next = head->next;
		free(head);
		head = NULL;
		head = next;

	}
	*cur = NULL;
}
int main()
{
	struct ListNode* plist = NULL;
	createNode(&plist, 6);
	createNode(&plist, 2);
	createNode(&plist, 6);
	createNode(&plist, 3);
	createNode(&plist, 4);
	createNode(&plist, 1);
	createNode(&plist,6);
	/*codeprint(plist);
	struct ListNode* try=removeElements(plist, 6);
	codeprint(try);*/
	SLdestory(&plist);
	return 0;	
}