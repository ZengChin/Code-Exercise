#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
  //Definition for singly-linked list.
 typedef struct ListNode {
      int val;
      struct ListNode *next;
  }SL;
 


struct ListNode* reverseList(struct ListNode* head) {
    SL* cur = head;
    SL* newcode = NULL;
    SL* next = cur->next;
    while (cur)
    {
        cur->next = newcode;
        newcode = cur;
        cur = next;
        if(next)
        next = next->next;
    }
    return newcode;
}
int main()
{
    SL* n1 = malloc(sizeof(SL));
    SL* n2 = malloc(sizeof(SL));
    SL* n3 = malloc(sizeof(SL));
    SL* n4 = malloc(sizeof(SL));
    SL* n5 = malloc(sizeof(SL));
    n1->val = 1;
    n1->next = n2;
    n2->val = 2;
    n2->next = n3;
    n3->val = 3;
    n3->next = n4;
    n4->val = 4;
    n4->next = n5;
    n5->val = 5;
    n5->next = NULL;
    SL*tmp=reverseList(n1);
    return 0;
}