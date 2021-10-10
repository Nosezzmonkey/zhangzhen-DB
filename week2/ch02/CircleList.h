
//数据结构循环链表，最大特点是尾结点的指针域指向第一个结点
//可以通过任意结点遍历整个链表 

#include<stdio.h>
#include<stdlib.h>
#include"DataElement.h"
//循环链表的结点 
typedef struct CircularNode{
	
	ElementType data;
	struct CircularNode * next;  //指向下一个结点的指针域 
}CircularNode;
//循环链表结构 
typedef struct  CircularLinkList
{
	CircularNode *next;  //头指针
	int length; 
}CircularLinkList;

void InsertCir(CircularLinkList *cList,int pos,ElementType element );
void Printcir(CircularLinkList *cList );
void Initcir(CircularLinkList* cList,ElementType *dataArray,int length) ;
ElementType Deletecir(CircularLinkList *cList,int pos);
CircularNode *  GetNode(CircularLinkList *cList,ElementType element);//根据元素内容返回对应的结点 
void cirPrint(CircularLinkList * cList,CircularNode* node);//根据给定的结点循环遍历出链表中的每个元素，和GET连用 



