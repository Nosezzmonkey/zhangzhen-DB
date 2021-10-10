#include<stdio.h>
#include<stdlib.h>
#include"DaE.h"
//双向链表的结点，包含一个数据域，两个指针域
typedef  struct DoublyNode {
	ElementType data;
	struct DoublyNode *prev;
	struct DoublyNode *next;
} DoublyNode;
//双向链表
typedef struct DoublyLinkList {
	int length;
	DoublyNode *next;

}DoublyLinkList;
//双向链表中插入元素 
void InsertDoubly(DoublyLinkList *dList,int pos,ElementType element); 
void printdl(DoublyLinkList* dList);


