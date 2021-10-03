#ifndef SEQUENCELIST_H
#define SEQUENCELIST_H
//此头文件用来定义顺序表
#include<stdio.h>
#include<stdlib.h>
#include"DaE.h"
#define  TRUE  1
#define  FALSE  0

/*
SeqList 要初始化的顺序表
elementArray 初始化要添加的元素内容数组
length  初始化时要添加的长度
*/
void InitList(SeqList * seqList,ElementType * elemArray,int length);
//index 下标  position 位置，然后要减一
/*
SeqList 要初始化的顺序表
index  要插入的下标
element  要插入的元素
*/

void InsertElement(SeqList * seqList,int index,ElementType element);
//打印顺序表

void PrintList(SeqList * seqList);
//删除顺序表中指定下标的元素
/*
SeqList 要初始化的顺序表
index  要插入的下标
returm element  要删除的元素，若没有，则返回空 
*/


ElementType *DeleteElement(SeqList * seqList,int index);
ElementType * GetElement(SeqList * seqList,int index) ;
//returm element  要查找的元素，若找不到，则返回NULL  
int GetLength(SeqList *seqList);
int IsEmpty(SeqList *seqList);
void  ClearList(SeqList *seqList);
#endif

