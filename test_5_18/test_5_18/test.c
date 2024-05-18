#define _CRT_SECURE_NO_WARNINGS
#include"list.h"
void test1()
{
	SL* plist = malloc(sizeof(SL));
	plist = InitList();
	PushList(plist, 1);
	PushList(plist, 2);
	PushList(plist, 3);
	PushList(plist, 4);
	PushList(plist, 5);
	PushList(plist, 6);
}
int main()
{
	test1();
	return 0;
}