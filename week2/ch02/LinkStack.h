#include<stdio.h>
#include<stdlib.h>
#include"Element.h"
//连战的结点
typedef struct StackNode{
	ChessMan data;//结点中保存的元素 
	struct StackNode *next;//指向下个结点的指针
	 
	
}StackNode;
typedef struct LinkStack {
	StackNode *top;//栈顶指针
	 
	int length;//链栈的长度（元素个数） 
}LinkStack;

void InitLinkStack(LinkStack * linkStack);
//压栈，并返回 
int PushLinkStack(LinkStack*linkStack,ChessMan element);
//出战 
int PopLinkStack(LinkStack*linkStack,ChessMan *element);
//清空栈 ，遍历栈中的每个元素并释放结点空间 
void ClearLinkStack(LinkStack*linkStack);

// 销毁栈 
void DestroyLinkStack(LinkStack*linkStack);

