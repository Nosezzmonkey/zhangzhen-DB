#include"LinkList.h" 

void InitLinkList(LinkList *linkList,ElementType * dataArray,int length){
	
	int i=0;
	for( i=0;i<length;i++)
	{
		InsertLinkList(linkList,i+1,dataArray[i]);
		
	}
	
}
//在指定位置POS出插入元素element 
void InsertLinkList(LinkList* linkList,int pos,ElementType element){
	//创建空结点并为数据域赋值
	Node *node=(Node*)malloc(sizeof(Node));
	node->data=element;
	node->next=NULL;
	if(pos==1)//如果插入的为第一个元素，则把头指针指向插入的元素 
	{
		node->next=linkList->next; 
		 linkList->next=node; 
		  linkList->length++;
		return ;
	}
	Node *currNode=linkList->next;
	int i=0;
	//通过循环找到要插入的结点的位置 
	for( i=1;currNode&&i<pos-1;i++){
			currNode=currNode->next;

	}
	//3.将结点插入并对接前面的结点
	 
	if(currNode){
		node->next=currNode->next;
		currNode->next=node;
		linkList->length++;
		
	}

	
	
}
void PrintLinkList(LinkList * linkList){
	Node * CuNode=linkList->next;
	if(!CuNode){
		printf("链表为空！\n");
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
