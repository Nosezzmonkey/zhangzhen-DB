#ifndef SEQUENCELIST_H
#define SEQUENCELIST_H
//��ͷ�ļ���������˳���
#include<stdio.h>
#include<stdlib.h>
#include"DaE.h"
#define  TRUE  1
#define  FALSE  0

/*
SeqList Ҫ��ʼ����˳���
elementArray ��ʼ��Ҫ��ӵ�Ԫ����������
length  ��ʼ��ʱҪ��ӵĳ���
*/
void InitList(SeqList * seqList,ElementType * elemArray,int length);
//index �±�  position λ�ã�Ȼ��Ҫ��һ
/*
SeqList Ҫ��ʼ����˳���
index  Ҫ������±�
element  Ҫ�����Ԫ��
*/

void InsertElement(SeqList * seqList,int index,ElementType element);
//��ӡ˳���

void PrintList(SeqList * seqList);
//ɾ��˳�����ָ���±��Ԫ��
/*
SeqList Ҫ��ʼ����˳���
index  Ҫ������±�
returm element  Ҫɾ����Ԫ�أ���û�У��򷵻ؿ� 
*/


ElementType *DeleteElement(SeqList * seqList,int index);
ElementType * GetElement(SeqList * seqList,int index) ;
//returm element  Ҫ���ҵ�Ԫ�أ����Ҳ������򷵻�NULL  
int GetLength(SeqList *seqList);
int IsEmpty(SeqList *seqList);
void  ClearList(SeqList *seqList);
#endif

