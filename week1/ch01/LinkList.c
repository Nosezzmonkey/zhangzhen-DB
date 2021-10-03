#include"LinkList.h" 

void InitLinkList(LinkList *linkList,ElementType * dataArray,int length){
	
	int i=0;
	for( i=0;i<length;i++)
	{
		InsertLinkList(linkList,i+1,dataArray[i]);
		
	}
	
}
//��ָ��λ��POS������Ԫ��element 
void InsertLinkList(LinkList* linkList,int pos,ElementType element){
	//�����ս�㲢Ϊ������ֵ
	Node *node=(Node*)malloc(sizeof(Node));
	node->data=element;
	node->next=NULL;
	if(pos==1)//��������Ϊ��һ��Ԫ�أ����ͷָ��ָ������Ԫ�� 
	{
		node->next=linkList->next; 
		 linkList->next=node; 
		  linkList->length++;
		return ;
	}
	Node *currNode=linkList->next;
	int i=0;
	//ͨ��ѭ���ҵ�Ҫ����Ľ���λ�� 
	for( i=1;currNode&&i<pos-1;i++){
			currNode=currNode->next;

	}
	//3.�������벢�Խ�ǰ��Ľ��
	 
	if(currNode){
		node->next=currNode->next;
		currNode->next=node;
		linkList->length++;
		
	}

	
	
}
void PrintLinkList(LinkList * linkList){
	Node * CuNode=linkList->next;
	if(!CuNode){
		printf("����Ϊ�գ�\n");
		linkList->length=0;
		return ;
		
		
	}
	int i=0;
	for( i=0;i<linkList->length;i++)
	{
		printf("%d\t%s\n",CuNode->data.id,CuNode->data.name);
		CuNode=CuNode->next;
	}
	
	
}
