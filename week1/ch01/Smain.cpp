#include<stdlib.h>
#include"DaE.h"
#include"Sel.h"
extern "C"
{
	#include"LinkList.h"
}

ElementType  dataArray[]= {
	{1,"���첩ʿ"},
	{2,"���첩ʿ1"},
	{3,"���첩ʿ3"},
	{4,"���첩ʿ4"},

};
void test();
void testLink();
int main() {

//	test();

testLink();
	return 0;

}
//void test() {
//
//	SeqList seqList;
//	ElementType *delElement;
//	InitList(&seqList,dataArray,sizeof(dataArray)/sizeof(dataArray[0]));
//	PrintList(&seqList);
//	int c=GetLength(&seqList);
//	printf("%d\n",c);
//
//	printf("ɾ����\n");
//	delElement=DeleteElement(&seqList,2);
//	PrintList(&seqList);
//	printf("��ɾ����Ԫ��");
//	printf("%d\t%s\n",delElement->id,delElement->name);
//	int d=GetLength(&seqList);
//	printf("%d\n",d);
//	int x=IsEmpty(&seqList);
//	printf("%d\n",x);
//	free(delElement); //һ��Ҫ�ǵ��ͷ��ڴ�
//	ClearList(&seqList);
//		int Y=IsEmpty(&seqList);
//	printf("%d\n",Y);
//	
//
//}

void testLink(){
	
	
	LinkList linkList;
	linkList.length=0;
	InitLinkList(&linkList,dataArray,sizeof(dataArray)/sizeof(dataArray[0]));
	PrintLinkList(&linkList);
	
	
}
