#define _CRT_SECURE_NO_WARNINGS
#include"SList.h"
void SListPrintf(SL*ps)
{
	while (ps != NULL)
	{
		printf("%d ", ps->data);
		ps = ps->next;
	}
}
void SListPushBack(SL** ps, int x)
{
	SL* newcode = (SL*)malloc(sizeof(SL));
	newcode->data = x;
	newcode->next = NULL;
	if (*ps == NULL)
	{
		*ps = newcode;
	}
	else
	{
		//while ((*ps)->next != NULL) {
		//	(*ps) = (*ps)->next;
		//}
		//(*ps)->next = newcode;
		SL* tail = *ps;
		while (tail->next != NULL) {
			tail = tail->next;
		}
		tail->next = newcode;
	}
}
void SListPopBack(SL** ps)
{
	SL* prev=NULL;
	SL* tail = *ps;
	while (tail->next != NULL)
	{
		prev = tail;
		tail = tail->next;
	}
	prev->next = NULL;
	free(tail);
	tail = NULL;
}
void SListPushFront(SL** ps, int x)
{
	SL* newcode = (SL*)malloc(sizeof(SL));
	newcode->data = x;
	newcode->next = NULL;
	newcode->next = *ps;
	*ps = newcode;
}
void SListPopFront(SL** ps)
{
	if(*ps!=NULL)
	{
		SL* prev = *ps;
		*ps = (*ps)->next;
		free(prev);
		prev = NULL;
	}
}
SL* SListFind(SL* ps,int pos)
{
	SL* cur = ps;
	while (cur)
	{
		if (cur->data == pos)
		{
			return cur;
		}
		else
		{
			cur = cur->next;
		}
	}
	return NULL;
}
void SListInsert(SL** ps, SL* pos, int x)
{
	SL* newcode = (SL*)malloc(sizeof(SL));
	newcode->data = x;
	newcode->next = pos;
	SL* prev = *ps;
	if (prev == pos)
	{
		*ps = newcode;
	}
	else
	{
		while (prev->next != pos)
		{
			prev = prev->next;
		}
		prev->next = newcode;
	}

}
