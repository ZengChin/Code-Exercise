#define _CRT_SECURE_NO_WARNINGS
#include"SeqList.h"
void SeqListPrintf(SL* ps)
{
	for (int i = 0; i < ps->size; i++) {
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}



void SeqListInit(SL* ps)
{
	ps->a = NULL;
	ps->size = ps->capacity = 0;
}

void SeqListDestory(SL* ps)
{
	free(ps->a);
	ps->a = NULL;
	ps->capacity = ps->size = 0;
}
//增容和尾插
void SeqListPushBack(SL* ps, SLDataType x)
{
	//如果没有空间，就扩容
	if (ps->size == ps->capacity)
	{
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		SLDataType* tmp = realloc(ps->a, newcapacity*sizeof(SLDataType));
		if (tmp == NULL)
		{
			printf("realloc faill\n");
			exit(-1);
		}
		ps->a = tmp;
		ps->capacity = newcapacity;
	}
	ps->a[ps->size] = x;
	ps->size++;
}
void SeqListPopBack(SL* ps)
{
	//ps->a[ps->size - 1] = 0;
	ps->size--;
}
void SeqListPushFront(SL* ps, SLDataType x);
void SeqListPopFront(SL* ps);
