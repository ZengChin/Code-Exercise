#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//�����÷���
//int main()
//{
//	int arr[10] = { 9,6,4,2,3,5,7,0,1 };
//	int x = 0;
//	int arr1[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	for (int i = 0; i < 10; i++) {
//		x ^= arr1[i];
//	}
//	for (int i = 0; i < 10; i++) {
//		x ^= arr[i];
//	}
//	printf("%d", x);
//	return 0;
//}
//���666
// 00001001(9)
// 00000001(1)
//void rep(int *p,int left,int right)
//{
//	int tmp = 0;
//	while (left < right) {
//		tmp=p[left];
//		*(p + left) = *(p + right);
//		*(p + right) = tmp;
//		left++;
//		right--;
//	}
//
//}
//int main()
//{
//	int arr[9] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 3;
//	//��n-k��ֵ�û�
//	rep(arr,0,8-k);
//	//��k��ֵ�û�
//	rep(arr, 10 - k, 8);
//	//�������������
//	rep(arr, 0, 8);
//	for (int i = 0; i<9; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//void rep(int* p, int left, int right)
//{
//	int tmp = 0;
//	while (left < right) {
//		tmp=p[left];
//		p[left] = p[right];
//		p[right] = tmp;
//		left++;
//		right--;
//		
//	}
//}
//int main()
//{
//	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
//	rep(arr, 0, 9);
//	for (int i = 0; i < 10; i++) {
//		printf("%d ", arr[i]);
//	}
//	return 0;
//
//}