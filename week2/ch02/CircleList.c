#include"CircleList.h"
void InsertCir(CircularLinkList *cList,int pos,ElementType element ) {

	//����һ���ս��
	CircularNode *node=(CircularNode*)malloc(sizeof(CircularNode)) ;
	node->data=element;
	node->next=NULL;
	if(pos==1) {
		node->next=cList->next;
		if(!node->next) { //�������ĳ���Ϊ0�� ���ý��ָ��������
			node->next=node;
		} else { //������Ȳ�Ϊ0����Ҫ�ҵ����һ����㣬������ָ��ָ�������Ľ��
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
	//����Ĳ��ǵ�һ�����

	CircularNode * currNode=cList->next;
	int i=0;
	for(i=1; currNode&&i<pos-1; i++) {
		currNode=currNode->next;
	}
	if(currNode) {
		node->next=currNode->next;
		currNode->next=node;
		cList->length++;

		if(pos==cList->length) {//�������λ��Ϊ���һ������βָ��ָ���һ�����
			node->next=cList->next;

		}
	}
}

void Printcir(CircularLinkList *cList ) {

	if(cList->length==0||!cList->next) {
		printf("������Ϊ�գ�û�����ݿ��Դ�ӡ");
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


	if(pos==1) {//��ɾ����Ϊ��һ��λ�õĽ�� 
		CircularNode *node=cList->next;
		if(node) {
			element=node->data;//��¼��һ�����
			CircularNode * currNode=cList->next;//�ҵ����һ�����
			int i=0;
			for(i=1; i<cList->length; i++) 
				{
				currNode=currNode->next;
				}				
	

			cList->next=node->next;//��ͷָ��ָ��ڶ������
			currNode->next=cList->next;//�����һ������ָ�뽻���ڶ������
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
//����Ԫ�����ݷ��ض�Ӧ�Ľ�� 
CircularNode *  GetNode(CircularLinkList *cList,ElementType element){
	
	
	CircularNode *node=cList->next; 
	if(!node)  return NULL;
	//��ʹ��ѭ������i������ѭ������ķ���
	 
	do{
		Iif(node->data.id==element && strcmp(element.name,node->data.name)==0)
		{
			return node;
			
		}
		node=node->next;
	}while(node!=cList->next);
	return NULL;
} 
//���ݸ����Ľ��ѭ�������������е�ÿ��Ԫ�أ���GET���� 

void cirPrint(CircularLinkList * cList,CircularNode* node)
{
if(!node||!cList->next){
	printf("������Ϊ�գ�û�ж�����");
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



 
 
 
