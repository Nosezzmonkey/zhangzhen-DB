#include<stdio.h>
#include<stdlib.h>
#include"DaE.h"
//˫������Ľ�㣬����һ������������ָ����
typedef  struct DoublyNode {
	ElementType data;
	struct DoublyNode *prev;
	struct DoublyNode *next;
} DoublyNode;
//˫������
typedef struct DoublyLinkList {
	int length;
	DoublyNode *next;

}DoublyLinkList;
//˫�������в���Ԫ�� 
void InsertDoubly(DoublyLinkList *dList,int pos,ElementType element); 
void printdl(DoublyLinkList* dList);


