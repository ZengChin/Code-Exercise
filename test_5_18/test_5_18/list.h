#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include<stdio.h>
#include<stdlib.h>
typedef struct list
{
	struct list* prev;
	struct list* next;
	int data;
}SL;

SL* InitList();
void PushList(SL* list,int x);