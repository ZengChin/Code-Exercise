#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include<stdio.h>
#include<stdlib.h>
typedef int SLDataType;
//��̬���ݱ�
//��̬
typedef struct SeqList
{
	SLDataType* a;//ָ��̬���ٵ�����
	int size;//���ݸ���
	int capacity;//������С
}SL;

void SeqListPrintf(SL* ps);
//��̬�ص㣺������ˣ��Ͳ��ò�     ȱ�㣺�����ٺ����أ��������ȷ��
//N��С�˲����ã��������˷ѡ�
// 
//�ӿں���
void SeqListInit(SL* ps);
void SeqListDestory(SL* ps);
void SeqListPushBack(SL* ps, SLDataType x);
void SeqListPopBack(SL* ps);
void SeqListPushFront(SL* ps, SLDataType x);
void SeqListPopFront(SL* ps);