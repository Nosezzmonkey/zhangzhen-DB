#include<stdio.h>
#include<stdlib.h>
#include"SeqStack.h"
#include"gobang.h"
ElementType datas[]= {
	{1,"Τ����"},
	{2,"ΤС��"},
	{3,"Τ��ͷ"},
	{4,"Τͪ��"},





};
void 	TestSeqStack();
void TestLinkStack() {
	
	  InitBoard();
	  PrintBoard();

	
}


int main() {
//	TestLinkStack();
	TestSeqStack();
	return 0;
}
void 	TestSeqStack() {
	SeqStack *stack =(SeqStack*)malloc(sizeof(SeqStack));//����ջ����Ҫ������ڴ�
	InitSeqStack(stack);
	int i=0;
	for(i; i<4; i++) {

		PushSeqStack(stack,datas[i]);
		printf("��ǰ��ջ��%d\t%s\n",stack->elements[i].id,stack->elements[i].name);
	}
	ElementType *element=(ElementType*)malloc(sizeof(ElementType));

	PopSeqStack(stack,element);
	printf("��ǰ��սԪ�أ�%d\t%s\n",element->id,element->name) ;

	for(i=0; i<stack->length; i++) {


		printf("��ǰջ��Ԫ�أ�%d\t%s\n",stack->elements[i].id,stack->elements[i].name);
	}

	free(stack);
}

