#include"DoublyList.h" 
void InsertDoubly(DoublyLinkList *dList,int pos,ElementType element){
//�����ս�� 
DoublyNode* node=(DoublyNode*)malloc(sizeof(DoublyNode));
node->data=element;
node->prev=NULL;
node->next=NULL;
if(pos==1)//����ڵ�һ��λ�ò���ӵ� 
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
		printf("����Ϊ�գ�û�����ݿ��Դ�ӡ��\n");
		dList->length=0;//�ǵðѳ�����Ϊ0�� 
		return ;
	}
	int i=0;
	for(i=0;i<dList->length;i++)
	{
		printf("%d\t%s\n",node->data.id,node->data.name);
		node=node->next;
	}
}


