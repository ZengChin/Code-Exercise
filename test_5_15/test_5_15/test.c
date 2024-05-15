#define _CRT_SECURE_NO_WARNINGS
#include"list.h"
void test1()
{
	SL* plist = (SL*)malloc(sizeof(SL));
	plist = NULL;
	PushListFront(&plist, 1);
	PushListFront(&plist, 2);
	PushListFront(&plist, 3);
	PushListFront(&plist, 4);
	PushListFront(&plist, 5);
	PushListFront(&plist, 6);

}
int main()
{
	test1();
	return 0;
}