#pragma once
#include"LinkTree.h"


//为了实现非递归的方式遍历二插树遍历，自定义一个链栈结构

/*栈结点*/
typedef struct stackNode {
	TreeNode* data; //数据域 存放结点
	struct stackNode* next;
	
}StackNode;

/* 栈结构*/

typedef struct {
	StackNode* top;//栈顶指针
	int length;//栈长度
}LinkStack;

//初始化链栈

void InitLinkStack(LinkStack* linkStack);
//入栈
int Push(LinkStack* linkStack, TreeNode* node);


//出栈
int Pop(LinkStack* linkStack, TreeNode** node);//接收需要要用二级指针接收指针

 
int IsLinkStackEmpty(LinkStack* linkStack) ;
