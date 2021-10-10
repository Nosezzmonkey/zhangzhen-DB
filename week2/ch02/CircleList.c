#include"CircleList.h"
void InsertCir(CircularLinkList *cList,int pos,ElementType element ) {

	//创建一个空结点
	CircularNode *node=(CircularNode*)malloc(sizeof(CircularNode)) ;
	node->data=element;
	node->next=NULL;
	if(pos==1) {
		node->next=cList->next;
		if(!node->next) { //如果链表的长度为0； 就让结点指向它自身
			node->next=node;
		} else { //如果长度不为0；就要找到最后一个结点，并让其指针指向你插入的结点
			CircularNode * lastNode=cList->next;

			int i=0;
			for(i=1; i<cList->length; i++) {
				lastNode=lastNode->next;
			}
			lastNode->next=node;
			cList->length++;

		}
		return ;

	}
	//插入的不是第一个结点

	CircularNode * currNode=cList->next;
	int i=0;
	for(i=1; currNode&&i<pos-1; i++) {
		currNode=currNode->next;
	}
	if(currNode) {
		node->next=currNode->next;
		currNode->next=node;
		cList->length++;

		if(pos==cList->length) {//若插入的位置为最后一个，则尾指针指向第一个结点
			node->next=cList->next;

		}
	}
}

void Printcir(CircularLinkList *cList ) {

	if(cList->length==0||!cList->next) {
		printf("链表长度为空，没有内容可以打印");
		return ;

	}
	CircularNode *node=cList->next;
	int i=1;
	for(i; i<cList->length+1; i++) {

		printf("%d\t%s\n",node->data.id,node->data.name);
		node=node->next;

	}
}
void Initcir(CircularLinkList* cList,ElementType* dataArray,int length) {

	int i=0;
	for(i=0; i<length; i++) {
		InsertCir(cList,i+1,dataArray[i]);
	}

}

ElementType Deletecir(CircularLinkList *cList,int pos) {
	ElementType element;
	element.id=-99;


	if(pos==1) {//若删除的为第一个位置的结点 
		CircularNode *node=cList->next;
		if(node) {
			element=node->data;//记录第一个结点
			CircularNode * currNode=cList->next;//找到最后一个结点
			int i=0;
			for(i=1; i<cList->length; i++) 
				{
				currNode=currNode->next;
				}				
	

			cList->next=node->next;//把头指针指向第二个结点
			currNode->next=cList->next;//把最后一个结点的指针交给第二个结点
			free(node);
			cList->length--;
				}		

		return element ;
			}
			
	CircularNode * preNode;
	CircularNode * node=cList->next;
	int i=1;
	for(int i=1; node&&i<pos;i++){
		preNode=node;
		node=node->next;
	}
	if(node){
		element=node->data;
		preNode->next=node->next;
		free(node);
		cList->length--;
	}
	return element;
			
			


}
//根据元素内容返回对应的结点 
CircularNode *  GetNode(CircularLinkList *cList,ElementType element){
	
	
	CircularNode *node=cList->next; 
	if(!node)  return NULL;
	//不使用循环变量i来遍历循环链表的方法
	 
	do{
		Iif(node->data.id==element && strcmp(element.name,node->data.name)==0)
		{
			return node;
			
		}
		node=node->next;
	}while(node!=cList->next);
	return NULL;
} 
//根据给定的结点循环遍历出链表中的每个元素，和GET连用 

void cirPrint(CircularLinkList * cList,CircularNode* node)
{
if(!node||!cList->next){
	printf("链表长度为空，没有东西！");
		return ;
}
ElementType element=node->data;
//CircularNode * currNode=GetNode(cList,element);
CircularNode * oriNode=node;
do{
	printf("%d\t%s\n",node->data.id,node->data.name);
	node=node->next;
}while(node!=oriNode);

}



 
 
 
