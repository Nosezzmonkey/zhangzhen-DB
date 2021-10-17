#pragma once
#include"Element.h"
#define STATE_OK 1
#define STATE_FALSE -1
#include<stdio.h>
#include<stdlib.h>
//����ѭ�����еĽṹ
typedef struct {
	ElementType data[MAX_SIZE];
	int front;	//��ͷָ��
	int rear;	//��β��ָ��
	int length;//���г���
	//Ҳ�������������ӱ�־λ����ʶ�����Ƿ�����
}SeqQueue;

typedef int State;  //���������������ʾ״̬

//��ʼ��
void InitSeqQueue(SeqQueue* seqQueue);
//��TRUE��FALSE �ķ�ʽ���ش���Ķ�����Ϊ��
State IsSeqQueueEmpty(SeqQueue* seqQueue);
//�ж϶����Ƿ�����
State IsSeqQueueFull(SeqQueue* seqQueue);
//��Ӳ���
State OfferSeqQueue(SeqQueue* seqQueue, ElementType element);
//���Ӳ���
State PollSeqQueue(SeqQueue* seqQueue,ElementType *element );


