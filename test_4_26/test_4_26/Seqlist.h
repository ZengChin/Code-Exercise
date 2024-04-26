#define _CRT_SECURE_NO_WARNINGS
#pragma once
#define N 100
#include<stdio.h>
#include<stdlib.h>
typedef int SLDataType;
//静态数据表
typedef struct SeqList
{
	SLDataType a[N];
	int size;//表示数组中储存了多少数据
	int capacity;//表示实际能存数据的空间容量是多大。
}SL;


//静态特点：如果满了，就不让插     缺点：给多少合适呢？这个很难确定
//N给小了不够用，给大了浪费。
// 
//接口函数
void SeqListInit(SL* ps);
void SeqListPushBack(SL* ps, SLDataType x);
void SeqListPopBack(SL* ps);
void SeqListPushFront(SL* ps, SLDataType x);
void SeqListPopFront(SL* ps);