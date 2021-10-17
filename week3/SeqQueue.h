#pragma once
#include"Element.h"
#define STATE_OK 1
#define STATE_FALSE -1
#include<stdio.h>
#include<stdlib.h>
//创建循环队列的结构
typedef struct {
	ElementType data[MAX_SIZE];
	int front;	//队头指针
	int rear;	//队尾的指针
	int length;//队列长度
	//也可以在这里增加标志位，标识队列是否已满
}SeqQueue;

typedef int State;  //给整形起别名来表示状态

//初始化
void InitSeqQueue(SeqQueue* seqQueue);
//以TRUE和FALSE 的方式返回传入的队列设为空
State IsSeqQueueEmpty(SeqQueue* seqQueue);
//判断队列是否已满
State IsSeqQueueFull(SeqQueue* seqQueue);
//入队操作
State OfferSeqQueue(SeqQueue* seqQueue, ElementType element);
//出队操作
State PollSeqQueue(SeqQueue* seqQueue,ElementType *element );


