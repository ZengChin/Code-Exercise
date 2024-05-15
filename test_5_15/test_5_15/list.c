#define _CRT_SECURE_NO_WARNINGS
#include"list.h"
SL* createcode(int x)
{
	SL* newcode = (SL*)malloc(sizeof(SL));
	newcode->data = x;
	newcode->next = NULL;
	return newcode;
}
void PushListFront(SL** slist,int x)
{
	SL* cur = *slist;
	if (*slist == NULL)
	{
		SL* newcode = createcode(x);
		*slist = newcode;
		(*slist)->prev = NULL;
	}
	else
	{
		while (cur->next)
		{
			cur = cur->next;
		}
		SL*newcode = createcode(x);
		cur->next = newcode;
		newcode->prev = cur;
	}
}