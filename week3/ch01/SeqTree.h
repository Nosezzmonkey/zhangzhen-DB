#pragma once
// ���� ˳��洢�ṹ --һ��ֻ������ȫ���������������Ա����ڴ��˷�
#include<stdio.h>
#include<stdlib.h>
#include<math.h>


#define MAX_SIZE 1024
/*  ����˳���� ����*/
typedef char SeqTree[MAX_SIZE];
//��ʼ���յĶ�����
void  InitSeqTree(SeqTree tree);

/*���������� ,i Ϊ�����е��±�*/
void CreateSeqTree(SeqTree tree, int i);

/*  ��ȡ���ĸ��ڵ�Ԫ��*/
int GetSeqTreeRoot(SeqTree tree);
/*  ��ȡ���Ľڵ�����*/
int  GetSeqTreeLength(SeqTree tree);
/*  ��ȡ�������*/
int GetSeqTreeDepth(SeqTree tree);
