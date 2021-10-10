#include"SeqStack.h"
void InitSeqStack(SeqStack *seqStack){
	seqStack->top=-1;//Õ»¶¥Ö¸ÏòÏÂ±êÎª-1µÄ 
	seqStack->length=0;
	
}
int PushSeqStack(SeqStack *seqStack,ElementType element){
	if(seqStack->top==MAX-1)
	{
		printf("ÂúÕ»£¬Ñ¹Õ»²Ù×÷Ê§°Ü£¡");
		return FALSE;
	}
	
	seqStack->top++;//Õ»¶¥Ö¸Õë+1£»ÒÔ±ã¼ÓÈëÐÂÔªËØ
	seqStack->elements[seqStack->top]=element;//½«Õ»¶¥ÔªËØ¸³Öµ 
	seqStack->length++;
	return TRUE;
}  
int PopSeqStack (SeqStack *seqStack,ElementType  *element){
	if(seqStack->top==-1){
		printf("¿ÕÕ»£¬³öÕ»Ê§°Ü£¡");
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
		printf("¿ÕÕ»£¬Õ»¶¥ÔªËØÎª¿Õ£¡");
		element=NULL;
		return ;
	}
	*element=seqStack->elements[seqStack->top];
	
}
