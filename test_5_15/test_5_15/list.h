#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef struct list
{
	int data;
	struct list* next;
	struct list* prev;
}SL;

void PushListFront(SL** list,int x);