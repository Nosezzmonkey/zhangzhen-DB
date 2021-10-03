#include"SeL.h"


/*
SeqList Ҫ��ʼ����˳���
elementArray ��ʼ��Ҫ��ӵ�Ԫ����������
length  ��ʼ��ʱҪ��ӵĳ���
*/
void InitList(SeqList * seqList,ElementType * elemArray,int length) {
	if(length>MAX_SIZE) {
		printf("������������߽磬��ʼ��ʧ�ܣ�\n");
		return;
	}
	//printf("fgfdg");
	seqList->length=0;//��ʼ��ʱlengthҪ����ֵ
	int i;



	for( i=0; i<length; i++) {
		//ÿ��ѭ�������±�Ϊi��λ�ò���һ��Ԫ��
		InsertElement(seqList,i,elemArray[i]);


	}


}
//index �±�  position λ�ã�Ȼ��Ҫ��һ
/*
�������
SeqList Ҫ��ʼ����˳���
index  Ҫ������±�
element  Ҫ�����Ԫ��
*/

void InsertElement(SeqList * seqList,int index,ElementType element) {
//1.��֤������Ԫ�ؿռ��Ƿ񳬹����ռ�MAX_SIZE
	//2.index��ֵ�Ƿ�Ϸ���0,MAX_SIZE��1��
	//3.�����indexӦ����length+1֮��
	//4.��length-1��ע���ʱΪ�±꣬��˼�Ǵ�ʱlength-1Ϊ���һ��Ԫ�أ���ʼ��ǰ��һ��Ԫ�ظ�ֵ������һ��Ԫ�أ���
	//�����Ԫ�ظ�ֵ���±�Ϊindex��Ԫ�ء�
	if(seqList->length+1>=MAX_SIZE) {
		printf("��������������Ԫ��ʧ�ܣ�\n");
		return ;
	}
	if(index<0||index>MAX_SIZE-1) {

		printf("ֻ��������ķ�Χ�ڲ���Ԫ��[0,%d]\n",MAX_SIZE-1);
		return;
	}
	if(index>seqList->length) {

		printf("������±곬�����������󳤶ȣ�����ʧ��!\n");
		return ;
	}
	int i;
	for(i=seqList->length-1; i>=index; i--) {
		seqList->datas[i+1]=seqList->datas[i];


	}
	//5.��Ҫ�����ֵ��ֵ���±�Ϊindex��Ԫ��
	seqList->datas[index]=element;
	//6.˳����ܳ��ȼ�1
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
		printf("�±�Խ�磬�޷��ҵ�ָ���±��Ԫ�أ�\n");
		return NULL;
	}
	ElementType *element;
	element =&seqList->datas[index];



}





ElementType* DeleteElement(SeqList * seqList,int index) {

	if(index<0||index>MAX_SIZE-1) {
		printf("�±�Խ�磬�޷�ɾ��ָ���±��Ԫ�أ�\n");
		return NULL;
	}
	//1.�ҵ�Ҫɾ����Ԫ�أ������������Ա㷵��(��������Ѿ�ɾ��Ԫ�صĸ�����������)

	ElementType* delElement=(ElementType*)malloc(sizeof(ElementType));
	*delElement=*GetElement(seqList,index);


	//�˷��˿ռ�,�����Ŀռ��޷��ͷ�  delElement=&seqList->datas[index];
	//2.��ָ��λ��ɾ������index��ʼ����һ��Ԫ�ظ�ֵ��ǰ�ߵ�һ��Ԫ��
	int i=0;
	for(int i=index; i<seqList->length-1; i++) {

		seqList->datas[i]=seqList->datas[i+1];
	}


	//3.˳����ܳ��ȼ�1
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



