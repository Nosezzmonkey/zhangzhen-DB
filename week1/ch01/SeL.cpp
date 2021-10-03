#include"SeL.h"


/*
SeqList 要初始化的顺序表
elementArray 初始化要添加的元素内容数组
length  初始化时要添加的长度
*/
void InitList(SeqList * seqList,ElementType * elemArray,int length) {
	if(length>MAX_SIZE) {
		printf("超出数组的最大边界，初始化失败！\n");
		return;
	}
	//printf("fgfdg");
	seqList->length=0;//初始化时length要赋初值
	int i;



	for( i=0; i<length; i++) {
		//每个循环都在下标为i的位置插入一个元素
		InsertElement(seqList,i,elemArray[i]);


	}


}
//index 下标  position 位置，然后要减一
/*
插入操作
SeqList 要初始化的顺序表
index  要插入的下标
element  要插入的元素
*/

void InsertElement(SeqList * seqList,int index,ElementType element) {
//1.验证插入后的元素空间是否超过最大空间MAX_SIZE
	//2.index的值是否合法「0,MAX_SIZE—1」
	//3.插入的index应该在length+1之内
	//4.从length-1（注意此时为下标，意思是此时length-1为最后一个元素）开始，前面一个元素赋值给后面一个元素，将
	//插入的元素赋值给下标为index的元素。
	if(seqList->length+1>=MAX_SIZE) {
		printf("数组已满，插入元素失败！\n");
		return ;
	}
	if(index<0||index>MAX_SIZE-1) {

		printf("只能在允许的范围内插入元素[0,%d]\n",MAX_SIZE-1);
		return;
	}
	if(index>seqList->length) {

		printf("插入的下标超过了数组的最大长度，插入失败!\n");
		return ;
	}
	int i;
	for(i=seqList->length-1; i>=index; i--) {
		seqList->datas[i+1]=seqList->datas[i];


	}
	//5.将要插入的值赋值给下标为index的元素
	seqList->datas[index]=element;
	//6.顺序表总长度加1
	seqList->length++;


}
void PrintList(SeqList * seqList) {
	int i;
	for( i=0; i<seqList->length; i++) {

		printf("%d\t%s\n",seqList->datas[i].id,seqList->datas[i].name);

	}

}
ElementType * GetElement(SeqList * seqList,int index) {
	if(index<0||index>MAX_SIZE-1) {
		printf("下标越界，无法找到指定下标的元素！\n");
		return NULL;
	}
	ElementType *element;
	element =&seqList->datas[index];



}





ElementType* DeleteElement(SeqList * seqList,int index) {

	if(index<0||index>MAX_SIZE-1) {
		printf("下标越界，无法删除指定下标的元素！\n");
		return NULL;
	}
	//1.找到要删除的元素，并保存起来以便返回(保存的是已经删除元素的副本！！！！)

	ElementType* delElement=(ElementType*)malloc(sizeof(ElementType));
	*delElement=*GetElement(seqList,index);


	//浪费了空间,后续的空间无法释放  delElement=&seqList->datas[index];
	//2.从指定位置删除，从index开始后面一个元素赋值给前边的一个元素
	int i=0;
	for(int i=index; i<seqList->length-1; i++) {

		seqList->datas[i]=seqList->datas[i+1];
	}


	//3.顺序表总长度减1
	seqList->length--;
	return delElement;





}

int GetLength(SeqList *seqList) {
	if(seqList==NULL)
		return 0;
	return seqList->length;

}
int IsEmpty(SeqList *seqList) {
	if(GetLength(seqList)==0)
		return TRUE;
	return FALSE;

}
void  ClearList(SeqList *seqList) {
if(seqList==NULL)
return ;
seqList->length=0;


}



