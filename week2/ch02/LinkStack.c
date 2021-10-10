#include"LinkStack.h"
void InitLinkStack(LinkStack * linkStack) {
	linkStack->top=NULL;
	linkStack->length=0;

}
int PushLinkStack(LinkStack* linkStack,ChessMan element) {
	//创建一个新结点
	StackNode *newNode=(StackNode*)malloc(sizeof(StackNode));
	newNode->data=element;
	newNode->next=linkStack->top;//新结点指向当前栈顶
	linkStack->top=newNode;//当前栈顶变为你要插入的元素
	linkStack->length++;
	return TRUE;
}
int PopLinkStack(LinkStack*linkStack,ChessMan *element) {

	if(linkStack->top==NULL) {
		printf("空战，出战操作失败！");
		return FALSE;

	}
	//先返回栈顶元素
	*element=linkStack->top->data;
	//记录出栈操作前的栈顶指针
	StackNode* node=linkStack->top;
	//栈顶指针下移一位
	linkStack->top= linkStack->top->next;
	free(node);
	linkStack->length--;
	return TRUE;


}
void ClearLinkStack(LinkStack*linkStack) {
StackNode * tempNode;
while (linkStack->top!=NULL){
	tempNode =linkStack->top;
	//栈顶指向下一个元素 
	linkStack->top=linkStack->top->next;
	free(tempNode);
	linkStack->length--;
	
}



}

void DestroyLinkStack(LinkStack*linkStack){
	ClearLinkStack(linkStack);
	free(linkStack);
	
		
}

