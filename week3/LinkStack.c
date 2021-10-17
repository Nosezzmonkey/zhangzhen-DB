#include"LinkStack.h"


//初始化链栈

void InitLinkStack(LinkStack* linkStack) {
	linkStack->top = NULL;
	linkStack->length = 0;


}
//入栈
int Push(LinkStack* linkStack, TreeNode* node) {
	StackNode* tempNode = (StackNode*)malloc(sizeof(StackNode));
	tempNode->data = node;
	tempNode->next = linkStack->top;
	linkStack->top = tempNode;
	linkStack->length++;
	return 1;
}


int Pop(LinkStack* linkStack, TreeNode** node) {
	StackNode* tmpNode;
	if (linkStack->top == NULL || linkStack->length == 0) return 0;
	//返回栈顶元素 ---理解难点
	*node = linkStack->top->data;
	tmpNode = linkStack->top;
	linkStack->top = linkStack->top->next;
	free(tmpNode);
	tmpNode = NULL;
	linkStack->length--;
	return 1;

}

int IsLinkStackEmpty(LinkStack* linkStack) {
	if (linkStack->top == NULL || linkStack->length == 0)
	{
		return 1;
	}
	
	return 0;

}


