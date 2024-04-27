#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include<stdio.h>
#include<stdlib.h>
typedef int SLDataType;
//静态数据表
//动态
typedef struct SeqList
{
	SLDataType* a;//指向动态开辟的数组
	int size;//数据个数
	int capacity;//容量大小
}SL;

void SeqListPrintf(SL* ps);
//静态特点：如果满了，就不让插     缺点：给多少合适呢？这个很难确定
//N给小了不够用，给大了浪费。
// 
//接口函数
void SeqListInit(SL* ps);
void SeqListDestory(SL* ps);
void SeqListPushBack(SL* ps, SLDataType x);
void SeqListPopBack(SL* ps);
void SeqListPushFront(SL* ps, SLDataType x);
void SeqListPopFront(SL* ps);