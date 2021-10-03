#include<stdio.h>
#include<stdlib.h>
#include"DaE.h"

typedef struct Node{
	ElementType data;//数据域 
	struct Node * next;//指针域 ，指向下个结点 
	
}Node;
//声明头结点   一般在定义结点时会定义头结点，以便统一结点的插入和删除操作 
typedef struct LinkList{
	Node* next;//头指针（如果链表有头结点，next就指向头结点，没有就指向第一个结点
 
	int length;//链表长度 
	
}LinkList;
void InitLinkList(LinkList *linkList,ElementType * dataArray,int length);
//在指定位置POS出插入元素element 
void InsertLinkList(LinkList* linkList,int pos,ElementType element);
void PrintLinkList(LinkList * linklist); 
