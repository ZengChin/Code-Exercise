#define _CRT_SECURE_NO_WARNINGS
#include"SeqList.h"
//增容
void SeqListCheckCapacity(SL* ps)
{
	if (ps->size == ps->capacity)
	{
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		SLDataType* tmp = realloc(ps->a, newcapacity * sizeof(SLDataType));
		if (tmp == NULL)
		{
			printf("realloc faill\n");
			exit(-1);
		}
		ps->a = tmp;
		ps->capacity = newcapacity;
	}
}
//打印
void SeqListPrintf(SL* ps)
{
	for (int i = 0; i < ps->size; i++) {
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}
//初始化
void SeqListInit(SL* ps)
{
	ps->a = NULL;
	ps->size = ps->capacity = 0;
}
//释放空间
void SeqListDestory(SL* ps)
{
	free(ps->a);
	ps->a = NULL;
	ps->capacity = ps->size = 0;
}
//尾插
void SeqListPushBack(SL* ps, SLDataType x)
{
	SeqListCheckCapacity(ps);
	ps->a[ps->size] = x;
	ps->size++;
}
//尾删
void SeqListPopBack(SL* ps)
{

	//if (ps->size > 0)
	//{
	//ps->size--;
	//}
	//ps->a[ps->size - 1] = 0;
	assert(ps->size > 0);
	ps->size--;
}
//前插
void SeqListPushFront(SL* ps, SLDataType x)
{
	SeqListCheckCapacity(ps);
	int end = ps->size - 1;
	while (end >= 0)
	{
		ps->a[end + 1] = ps->a[end];
		end--;
	}
	ps->a[0] = x;
	ps->size++;
}
//前删
void SeqListPopFront(SL* ps)
{	
	assert(ps->size >= 0);
	int begin = 1;
	while (begin<ps->size)
	{
	ps->a[begin-1] = ps->a[begin];
	begin++;
	}
	ps->size--;
}
