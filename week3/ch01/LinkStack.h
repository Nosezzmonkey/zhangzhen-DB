#pragma once
#include"LinkTree.h"


//Ϊ��ʵ�ַǵݹ�ķ�ʽ�����������������Զ���һ����ջ�ṹ

/*ջ���*/
typedef struct stackNode {
	TreeNode* data; //������ ��Ž��
	struct stackNode* next;
	
}StackNode;

/* ջ�ṹ*/

typedef struct {
	StackNode* top;//ջ��ָ��
	int length;//ջ����
}LinkStack;

//��ʼ����ջ

void InitLinkStack(LinkStack* linkStack);
//��ջ
int Push(LinkStack* linkStack, TreeNode* node);


//��ջ
int Pop(LinkStack* linkStack, TreeNode** node);//������ҪҪ�ö���ָ�����ָ��

 
int IsLinkStackEmpty(LinkStack* linkStack) ;
