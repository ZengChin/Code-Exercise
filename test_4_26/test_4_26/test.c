#define _CRT_SECURE_NO_WARNINGS
#include"SeqList.h"
void TestSeqList()
{
	SL s1;
	SeqListInit(&s1);
	SeqListPushBack(&s1, 1);
	SeqListPushBack(&s1, 2);
	SeqListPushBack(&s1, 3);
	SeqListPushBack(&s1, 4);
	SeqListPushBack(&s1, 5);

	SeqListPrintf(&s1);

	SeqListPopBack(&s1);
	SeqListPopBack(&s1);

	SeqListPrintf(&s1);

	SeqListDestory(&s1);
}
int main()
{
	TestSeqList();
	return 0;
}