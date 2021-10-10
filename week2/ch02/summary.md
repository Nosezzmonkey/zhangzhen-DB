# 第二周作业总结

## 链式存储结构的线性表 ————链表
  结点包括数据域和指针域
  
  链表是由n个结点连接成，第一个结点的存储位置叫做头指针，最后一个结点的指针为“空”
   
  头指针：链表中第一个结点的存储位置
  
  头结点：在单链表的第一个结点前附设的一个结点
  
  
 <hr>

> 文件名：**LinkList.h**

声明结点的指针域和数据域

```C
typedef struct Node{
	ElementType data;//数据域 
	struct Node * next;//指针域 ，指向下个结点 
	
}Node;
```

声明头结点和头指针
```C
//声明头结点   一般在定义结点时会定义头结点，以便统一结点的插入和删除操作 
typedef struct LinkList{
	Node* next;//头指针（如果链表有头结点，next就指向头结点，没有就指向第一个结点
 
	int length;//链表长度 
	
}LinkList;
```

对函数的声明放在了.h文件中，以下是链表常用的函数的声明
```C
//初始化链表
void InitLinkList(LinkList *linkList,ElementType * dataArray,int length);
//在指定位置POS出插入元素element 
void InsertLinkList(LinkList* linkList,int pos,ElementType element);
//打印链表的内容
void PrintLinkList(LinkList * linklist);
//判断是否为空链表
int IsLinkListEmpty(LinkList *linkList);
//获取链表中的某一个元素
ElementType  GetLinkListElement(LinkList *linkList,int pos);
//删除链表中的某一个元素，并将删除的元素返回
ElementType DeletLinkList(LinkList *linkList,int pos);
//清空链表
void clear(LinkList* linkList);
```

首先完成对链表的插入操作
```C
//在指定位置POS出插入元素element
void InsertLinkList(LinkList* linkList,int pos,ElementType element) {
	//创建空结点并分配空间并为数据域赋值
	Node *node=(Node*)malloc(sizeof(Node));
	node->data=element;
	node->next=NULL;
	if(pos==1) { //如果插入的为第一个元素，则把头指针指向插入的元素
		node->next=linkList->next;
		linkList->next=node;
		linkList->length++;
		return ;
	}
	Node *currNode=linkList->next;//声明一个临时结点用来找到要插入结点的前一个位置
	int i=0;
	//通过循环找到要插入的结点的位置
	for( i=1; currNode&&i<pos-1; i++) {
		currNode=currNode->next;

	}
	//3.将结点插入并对接前面的结点

	if(currNode) {
		node->next=currNode->next;
		currNode->next=node;
		linkList->length++;

	}
}

```
//单链表的初始化操作是由插入操作得来的

```C
void InitLinkList(LinkList *linkList,ElementType * dataArray,int length) {

	int i=0;
	for( i=0; i<length; i++) {
		InsertLinkList(linkList,i+1,dataArray[i]);//在第i+1的位置上插入数组元素

	}

}
```
//单链表的删除，并返回删除元素
```C
ElementType DeletLinkList(LinkList *linkList,int pos) {
	ElementType element;//被删除的元素

	element.id=-999;//赋值为不可能值，来判断是否成功删除
	Node* node=NULL;
	if(pos==1) {
		node=linkList->next;//若要删除的为第一个结点
		if(node) {
			element=node->data;
			linkList->next=node->next;
			free(node);//释放被第一个结点的内存
			linkList->length--;
		}
		return element;
	}
	//找到要删除结点和他的前一个结点
	//要删除的结点的next赋值给前缀结点的next
	//释放要删除的结点
	node=linkList->next;
	int i=0;
	for(i=1; i<pos-1; i++) {
		node=node->next;
	}
	Node* p=node->next;
	if(p) {
		element=p->data;
		node->next=p->next;
		free(p);
		linkList->length--;
	}





	return element;


}
```
##  ————循环链表

数据结构循环链表，最大特点是尾结点的指针域指向第一个结点

可以通过任意结点遍历整个链表 

### 循环链表的插入操作需要注意，当插入的为第一个结点时，需要将尾结点的指针指向插入的结点，若插入为最后一个结点时，需要将插入的结点的指针指向第一个结点
```C
void InsertCir(CircularLinkList *cList,int pos,ElementType element ) {

	//创建一个空结点
	CircularNode *node=(CircularNode*)malloc(sizeof(CircularNode)) ;
	node->data=element;
	node->next=NULL;
	if(pos==1) {
		node->next=cList->next;
		if(!node->next) { //如果原始链表的长度为0； 就让结点指向它自身
			node->next=node;
		} else { //如果长度不为0；就要找到最后一个结点，并让其指针指向你插入的结点
			CircularNode * lastNode=cList->next;

			int i=0;
			for(i=1; i<cList->length; i++) {
				lastNode=lastNode->next;
			}
			lastNode->next=node;
			cList->length++;//记得链表长度加1

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

		if(pos==cList->length+1) {//""若插入的位置为最后一个，则尾指针指向第一个结点""
			node->next=cList->next;

		}
	}
}

```

循坏链表的遍历操作
```C
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
```
循坏链表的删除操作，同样需要注意插入操作所关心的
```C
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
```

```C
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
```
```C
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

```
##  ————双向链表

```C
//双向链表的结点，包含一个数据域，两个指针域
typedef  struct DoublyNode {
	ElementType data;
	struct DoublyNode *prev;//前缀指针
	struct DoublyNode *next;//后继指针
} DoublyNode;

```
```C
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
```
##  ————静态链表
1、初始化：每个元素的next都指向下一个元素

我们将数组的最后一个元素的next用来保存第一个插入元素的下标，初始化为0；

2、插入数据时，首先要分配内存（malloc）

3、数组第一个元素的next游标用来存放第一个空闲结点的下标（备用链表的下标）

4、mallo后，获得第一个空结点下标，然后插入数据，伺候第一个元素的下标++（指向第一个空结点），将插入的数据的结点游标next置为0。
```C
//静态链表 其实就是一个结构数组 
typedef struct{
	ElementType data;//数据域 
	int next; //int cursor  游标，如果为0则表示无指向 
	
	
}StaticLinkList[MAXSIZE_SSL];
```
初始化静态链表，注意要把最后一个结点和第二个结点都置为0。
```C
void InitSta(StaticLinkList slList) {
	int i=0;
	for(i=0; i<MAXSIZE_SSL; i++) {
		slList[i].next=i+1;
	}
	//将最后一个结点置空
	slList[MAXSIZE_SSL-1].next=0;
	slList[MAXSIZE_SSL-2].next=0;//将备用链表的尾结点值为空

}


```
静态链表的插入是在指定位置的后边插入
```C
//回收原始链表删除的空间 
void Freesta(StaticLinkList slList ,int intdex){
	//将下标为index的空闲结点回收到备用链表 
	slList[index].next=slList[o].next;
	//将0号元素的next结点指向备用链表的第一个结点，表示index空闲 
	slList[0].next=index;
}
```

```C
/删除 
int Delsta(StaticLinkList slList ,int pos){
	if(pos<1||pos>Getsta(slList)) 
	{
		return ERROR;
		
	}
	int cursor=MAXSIZE_SSL-1;
	//通过循环找到要删除结点的前缀结点 
	for(int i=1;i<=pos-1;i++){
		cursor=slList[sursor].next;
	}
	int delIndex =slList[cursor].next;
		slList[cursor].next=slList[delIndex].next;
		//释放空间
		Freesta(slList,delIndex);
		return OK;
```

```C
int mallocSSL(StaticLinkList slList) {
	//拿到第一个空闲结点的下标
	int cursor =sList[0].next;
	if(cursor) {
		sList[0].next=sList[cursor].next;

	}
	return cursor;
```

##  ————顺序栈
栈是限定仅在表尾插入和删除操作的线性表

允许插入和删除的一端为栈顶，另一端称为栈底

不含任何元素的为空栈

特点：先进后出，后进先出
```C
typedef struct SeqStack{
	ElementType  elements[MAX];//顺序栈中用来存放数据元素的数组
	int top;  //栈顶（数组中的下标），如果为-1则证明栈为空
	int length;  //当前栈的元素个数 
	
}SeqStack;
void InitSeqStack(SeqStack *seqStack); 

//入栈操作 
int PushSeqStack(SeqStack *seqStack,ElementType element); 

//以指针的方式返回出栈的元素，返回值为真或假 

int PopSeqStack (SeqStack *seqStack,ElementType  *element); 
void ClearSeqStack(SeqStack *seqStack);
//返回栈顶的元素 
void GetSeqStackTopElement(SeqStack *seqStack,ElementType *element );
```
栈的入栈操作
```C
int PushSeqStack(SeqStack *seqStack,ElementType element){
	if(seqStack->top==MAX-1)
	{
		printf("满栈，压栈操作失败！");
		return FALSE;
	}
	
	seqStack->top++;//栈顶指针+1；以便加入新元素
	seqStack->elements[seqStack->top]=element;//将栈顶元素赋值 
	seqStack->length++;
	return TRUE;

```
栈的出栈操作
```C
int PopSeqStack (SeqStack *seqStack,ElementType  *element){
	if(seqStack->top==-1){
		printf("空栈，出栈失败！");
		return FALSE;
		 
	}
	*element=seqStack->elements[seqStack->top];
	seqStack->top--;
	seqStack->length--;
	return TRUE;
} 
```
##  ————链栈
链栈的结构和链表相似，只不过遵循的是栈的规则


//链栈的初始化
```C
void InitLinkStack(LinkStack * linkStack) {
	linkStack->top=NULL;
	linkStack->length=0;

}
```

链栈的入栈操作
```C
int PushLinkStack(LinkStack* linkStack,ChessMan element) {
	//创建一个新结点
	StackNode *newNode=(StackNode*)malloc(sizeof(StackNode));
	newNode->data=element;
	newNode->next=linkStack->top;//新结点的下一个指向未插入时的原来栈顶元素 
	linkStack->top=newNode;//当前栈顶变为你要插入的元素
	linkStack->length++;
	return TRUE;
}
```
链栈的出栈操作
```C
int PopLinkStack(LinkStack*linkStack,ChessMan *element) {

	if(linkStack->top==NULL) {
		printf("空战，出战操作失败！");
		return FALSE;

	}
	//先返回栈顶元素
	*element=linkStack->top->data;
	//记录出栈操作前的栈顶指针
	StackNode* node=linkStack->top;
	//栈顶指针下移一位
	linkStack->top= linkStack->top->next;
	free(node);
	linkStack->length--;
	return TRUE;


}
```
