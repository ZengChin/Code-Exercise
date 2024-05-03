#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef int SLData;


typedef struct SList
{
	SLData data;
	struct SList* next;
}SL;


void SListPrintf(SL* ps);
void SListPushBack(SL ** ps, int x);