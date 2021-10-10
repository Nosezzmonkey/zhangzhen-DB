#include<stdio.h>
#include<stdlib.h>
#include"Element.h"
typedef struct SeqStack{
	ElementType  elements[MAX];//顺序栈中用来存放数据元素的数组
	int top;  //栈顶（数组中的下标），如果为-1则证明栈为空
	int length;  //当前栈的元素个数 
	
}SeqStack;
void InitSeqStack(SeqStack *seqStack); 

//入栈操作 
int PushSeqStack(SeqStack *seqStack,ElementType element); 

//以指针的方式返回出栈的元素，返回值为真或假 

int PopSeqStack (SeqStack *seqStack,ElementType  *element); 
void ClearSeqStack(SeqStack *seqStack);
//返回栈顶的元素 
void GetSeqStackTopElement(SeqStack *seqStack,ElementType *element );
