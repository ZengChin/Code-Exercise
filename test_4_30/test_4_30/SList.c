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
		SL* tail = *ps;
		while (tail->next != NULL) {
			tail = tail->next;
		}
	tail->next = newcode;
	}
}
