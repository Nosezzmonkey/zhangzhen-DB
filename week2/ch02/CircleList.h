
//���ݽṹѭ����������ص���β����ָ����ָ���һ�����
//����ͨ������������������� 

#include<stdio.h>
#include<stdlib.h>
#include"DataElement.h"
//ѭ������Ľ�� 
typedef struct CircularNode{
	
	ElementType data;
	struct CircularNode * next;  //ָ����һ������ָ���� 
}CircularNode;
//ѭ������ṹ 
typedef struct  CircularLinkList
{
	CircularNode *next;  //ͷָ��
	int length; 
}CircularLinkList;

void InsertCir(CircularLinkList *cList,int pos,ElementType element );
void Printcir(CircularLinkList *cList );
void Initcir(CircularLinkList* cList,ElementType *dataArray,int length) ;
ElementType Deletecir(CircularLinkList *cList,int pos);
CircularNode *  GetNode(CircularLinkList *cList,ElementType element);//����Ԫ�����ݷ��ض�Ӧ�Ľ�� 
void cirPrint(CircularLinkList * cList,CircularNode* node);//���ݸ����Ľ��ѭ�������������е�ÿ��Ԫ�أ���GET���� 



