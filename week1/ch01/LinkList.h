#include<stdio.h>
#include<stdlib.h>
#include"DaE.h"

typedef struct Node{
	ElementType data;//������ 
	struct Node * next;//ָ���� ��ָ���¸���� 
	
}Node;
//����ͷ���   һ���ڶ�����ʱ�ᶨ��ͷ��㣬�Ա�ͳһ���Ĳ����ɾ������ 
typedef struct LinkList{
	Node* next;//ͷָ�루���������ͷ��㣬next��ָ��ͷ��㣬û�о�ָ���һ�����
 
	int length;//������ 
	
}LinkList;
void InitLinkList(LinkList *linkList,ElementType * dataArray,int length);
//��ָ��λ��POS������Ԫ��element 
void InsertLinkList(LinkList* linkList,int pos,ElementType element);
void PrintLinkList(LinkList * linklist); 
