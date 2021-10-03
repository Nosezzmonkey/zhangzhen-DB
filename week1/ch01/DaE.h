#ifndef DATAELEMENT_H
#define DATAELEMENT_H
//此头文件用来定义数据元素
#define MAX_SIZE 255
//第一步定义数据元素

typedef struct {
	int id;
	char name[20];


} ElementType;
//定义顺序表结构
typedef struct {
	ElementType datas[MAX_SIZE];//顺序表中的元素集合  
	int length;      			//当前顺序表中的元素个数

} SeqList;
#endif

