#include<stdio.h>
#include<stdlib.h>
#include"SeqStack.h"
#include"gobang.h"
ElementType datas[]= {
	{1,"韦春花"},
	{2,"韦小宝"},
	{3,"韦虎头"},
	{4,"韦酮醇"},





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
	SeqStack *stack =(SeqStack*)malloc(sizeof(SeqStack));//创建栈首先要分配好内存
	InitSeqStack(stack);
	int i=0;
	for(i; i<4; i++) {

		PushSeqStack(stack,datas[i]);
		printf("当前入栈：%d\t%s\n",stack->elements[i].id,stack->elements[i].name);
	}
	ElementType *element=(ElementType*)malloc(sizeof(ElementType));

	PopSeqStack(stack,element);
	printf("当前出战元素：%d\t%s\n",element->id,element->name) ;

	for(i=0; i<stack->length; i++) {


		printf("当前栈内元素：%d\t%s\n",stack->elements[i].id,stack->elements[i].name);
	}

	free(stack);
}

