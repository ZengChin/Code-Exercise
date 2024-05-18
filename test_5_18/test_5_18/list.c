#define _CRT_SECURE_NO_WARNINGS
#include"list.h"
SL* InitList()
{
	SL* list = malloc(sizeof(SL));
	list->next = list;
	list->prev = list;
	return list;
}
void PushList(SL* list,int x)
{
	SL* tail = list->prev;
	SL* newcode = malloc(sizeof(SL));
	newcode->data = x;
	tail->next = newcode;
	newcode->prev = tail;
	newcode->next = list;
	list->prev = newcode;
}