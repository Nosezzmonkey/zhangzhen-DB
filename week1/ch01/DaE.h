#ifndef DATAELEMENT_H
#define DATAELEMENT_H
//��ͷ�ļ�������������Ԫ��
#define MAX_SIZE 255
//��һ����������Ԫ��

typedef struct {
	int id;
	char name[20];


} ElementType;
//����˳���ṹ
typedef struct {
	ElementType datas[MAX_SIZE];//˳����е�Ԫ�ؼ���  
	int length;      			//��ǰ˳����е�Ԫ�ظ���

} SeqList;
#endif

