#include<stdlib.h>
#include"DaE.h"
#include"Sel.h"
extern "C"
{
	#include"LinkList.h"
}

ElementType  dataArray[]= {
	{1,"奇异博士"},
	{2,"奇异博士1"},
	{3,"奇异博士3"},
	{4,"奇异博士4"},

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
//	printf("删除后\n");
//	delElement=DeleteElement(&seqList,2);
//	PrintList(&seqList);
//	printf("被删除的元素");
//	printf("%d\t%s\n",delElement->id,delElement->name);
//	int d=GetLength(&seqList);
//	printf("%d\n",d);
//	int x=IsEmpty(&seqList);
//	printf("%d\n",x);
//	free(delElement); //一定要记得释放内存
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
