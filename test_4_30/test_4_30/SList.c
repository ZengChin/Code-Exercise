#define _CRT_SECURE_NO_WARNINGS
#include"SList.h"
void SListPrintf(SL*ps)
{
	while (ps->next != NULL)
	{
		printf("%d", ps->data);
		ps = ps->next;
	}
}
void SListPushBack(SL* ps, int x)
{

}
