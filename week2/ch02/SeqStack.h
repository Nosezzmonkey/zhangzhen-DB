#include<stdio.h>
#include<stdlib.h>
#include"Element.h"
typedef struct SeqStack{
	ElementType  elements[MAX];//˳��ջ�������������Ԫ�ص�����
	int top;  //ջ���������е��±꣩�����Ϊ-1��֤��ջΪ��
	int length;  //��ǰջ��Ԫ�ظ��� 
	
}SeqStack;
void InitSeqStack(SeqStack *seqStack); 

//��ջ���� 
int PushSeqStack(SeqStack *seqStack,ElementType element); 

//��ָ��ķ�ʽ���س�ջ��Ԫ�أ�����ֵΪ���� 

int PopSeqStack (SeqStack *seqStack,ElementType  *element); 
void ClearSeqStack(SeqStack *seqStack);
//����ջ����Ԫ�� 
void GetSeqStackTopElement(SeqStack *seqStack,ElementType *element );
