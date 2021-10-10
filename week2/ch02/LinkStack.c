#include"LinkStack.h"
void InitLinkStack(LinkStack * linkStack) {
	linkStack->top=NULL;
	linkStack->length=0;

}
int PushLinkStack(LinkStack* linkStack,ChessMan element) {
	//����һ���½��
	StackNode *newNode=(StackNode*)malloc(sizeof(StackNode));
	newNode->data=element;
	newNode->next=linkStack->top;//�½��ָ��ǰջ��
	linkStack->top=newNode;//��ǰջ����Ϊ��Ҫ�����Ԫ��
	linkStack->length++;
	return TRUE;
}
int PopLinkStack(LinkStack*linkStack,ChessMan *element) {

	if(linkStack->top==NULL) {
		printf("��ս����ս����ʧ�ܣ�");
		return FALSE;

	}
	//�ȷ���ջ��Ԫ��
	*element=linkStack->top->data;
	//��¼��ջ����ǰ��ջ��ָ��
	StackNode* node=linkStack->top;
	//ջ��ָ������һλ
	linkStack->top= linkStack->top->next;
	free(node);
	linkStack->length--;
	return TRUE;


}
void ClearLinkStack(LinkStack*linkStack) {
StackNode * tempNode;
while (linkStack->top!=NULL){
	tempNode =linkStack->top;
	//ջ��ָ����һ��Ԫ�� 
	linkStack->top=linkStack->top->next;
	free(tempNode);
	linkStack->length--;
	
}



}

void DestroyLinkStack(LinkStack*linkStack){
	ClearLinkStack(linkStack);
	free(linkStack);
	
		
}

