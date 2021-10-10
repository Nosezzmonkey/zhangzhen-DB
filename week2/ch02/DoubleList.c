#include"DoublyList.h" 
void InsertDoubly(DoublyLinkList *dList,int pos,ElementType element){
//创建空结点 
DoublyNode* node=(DoublyNode*)malloc(sizeof(DoublyNode));
node->data=element;
node->prev=NULL;
node->next=NULL;
if(pos==1)//如果在第一个位置插入接地 
{
	node->next=dList->next;
	dList->next=node;
	node->next->prev=node;
	dList++;
	return ;
}
DoublyNode* currNode=dList->next;
int i=0;
for(i=1;currNode&&i<pos-1;i++){
	currNode=currNode->next;
}
if(currNode){
	
	node->prev=currNode;
if(currNode->next)
{
	currNode->next->prev=node;
}
node->next=currNode->next;
currNode->next=node;
dList->length++;
}



}
void printdl(DoublyLinkList* dList){
	DoublyNode *node=dList->next;
	if(!node||dList->length==0){
		printf("链表为空，没有内容可以打印！\n");
		dList->length=0;//记得把长度设为0； 
		return ;
	}
	int i=0;
	for(i=0;i<dList->length;i++)
	{
		printf("%d\t%s\n",node->data.id,node->data.name);
		node=node->next;
	}
}


