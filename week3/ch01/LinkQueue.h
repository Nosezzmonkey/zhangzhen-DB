#pragma once


//������ ���ڶ������Ĳ������

#include"LinkTree.h"


/*���ӽ������������ν��*/
typedef struct qNode {
	TreeNode* data;
	struct qNode* next;

}QueueNode;
//������

typedef struct {
	QueueNode* qFront;
	QueueNode* qRear;
	
}LinkQueue;


void InitLinkQueue(LinkQueue* linkQueue);

void enQueue(LinkQueue* linkQueue,TreeNode* data);

TreeNode* deQueue(LinkQueue* linkQueue);
 

int IsLinkQueueEmpty(LinkQueue* linkQueue);
