#define _CRT_SECURE_NO_WARNINGS
#include"SeqList.h"
//void TestSeqList1()
//{
//	SL s1;
//	SeqListInit(&s1);
//	SeqListPushBack(&s1, 1);
//	SeqListPushBack(&s1, 2);
//	SeqListPushBack(&s1, 3);
//	SeqListPushBack(&s1, 4);
//	SeqListPushBack(&s1, 5);
//
//	SeqListPrintf(&s1);
//
//	SeqListPopBack(&s1);
//	SeqListPopBack(&s1);
//
//	SeqListPrintf(&s1);
//
//	SeqListDestory(&s1);
//}
//TestSeqList2()
//{
//	SL s1;
//	SeqListInit(&s1);
//	SeqListPushBack(&s1, 1);
//	SeqListPushBack(&s1, 2);
//	SeqListPushBack(&s1, 3);
//	SeqListPushBack(&s1, 4);
//	SeqListPushBack(&s1, 5);
//	SeqListPrintf(&s1);
//
//	SeqListPushFront(&s1, -1);
//	SeqListPushFront(&s1, -2);
//	SeqListPushFront(&s1, -3);
//	SeqListPushFront(&s1, -4);
//	SeqListPushFront(&s1, -5);
//	SeqListPushFront(&s1, -6);
//	SeqListPushFront(&s1, -7);
//	SeqListPrintf(&s1);
//
//	SeqListPopFront(&s1);
//	SeqListPopFront(&s1);
//	SeqListPopFront(&s1);
//
//	SeqListPrintf(&s1);
//
//
//
//	SeqListDestory(&s1);
//}
//通讯录的菜单
void menu()
{
	printf("*************************\n");
	printf("请选择你的操作:");
	printf("1.头插  2.尾插\n");
	printf("3.尾插  4.尾删\n");
	printf("0.退出        \n");
	printf("*************************\n");
	

}
int main()
{
	//TestSeqList1();
	//TestSeqList2();
	int i = 0;
	do {	
		menu();
		scanf("%d", &i);
	} while (i);

	return 0;
}