#include"SeqStack.h"
void InitSeqStack(SeqStack *seqStack){
	seqStack->top=-1;//ջ��ָ���±�Ϊ-1�� 
	seqStack->length=0;
	
}
int PushSeqStack(SeqStack *seqStack,ElementType element){
	if(seqStack->top==MAX-1)
	{
		printf("��ջ��ѹջ����ʧ�ܣ�");
		return FALSE;
	}
	
	seqStack->top++;//ջ��ָ��+1���Ա������Ԫ��
	seqStack->elements[seqStack->top]=element;//��ջ��Ԫ�ظ�ֵ 
	seqStack->length++;
	return TRUE;
}  
int PopSeqStack (SeqStack *seqStack,ElementType  *element){
	if(seqStack->top==-1){
		printf("��ջ����ջʧ�ܣ�");
		return FALSE;
		 
	}
	*element=seqStack->elements[seqStack->top];
	seqStack->top--;
	seqStack->length--;
	return TRUE;
} 
void ClearSeqStack(SeqStack *seqStack){
	seqStack->top=-1;
	seqStack->length=0;
}
void GetSeqStackTopElement(SeqStack *seqStack,ElementType *element ){
	if(seqStack->top==-1){
		printf("��ջ��ջ��Ԫ��Ϊ�գ�");
		element=NULL;
		return ;
	}
	*element=seqStack->elements[seqStack->top];
	
}
