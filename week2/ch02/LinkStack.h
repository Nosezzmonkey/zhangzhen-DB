#include<stdio.h>
#include<stdlib.h>
#include"Element.h"
//��ս�Ľ��
typedef struct StackNode{
	ChessMan data;//����б����Ԫ�� 
	struct StackNode *next;//ָ���¸�����ָ��
	 
	
}StackNode;
typedef struct LinkStack {
	StackNode *top;//ջ��ָ��
	 
	int length;//��ջ�ĳ��ȣ�Ԫ�ظ����� 
}LinkStack;

void InitLinkStack(LinkStack * linkStack);
//ѹջ�������� 
int PushLinkStack(LinkStack*linkStack,ChessMan element);
//��ս 
int PopLinkStack(LinkStack*linkStack,ChessMan *element);
//���ջ ������ջ�е�ÿ��Ԫ�ز��ͷŽ��ռ� 
void ClearLinkStack(LinkStack*linkStack);

// ����ջ 
void DestroyLinkStack(LinkStack*linkStack);

