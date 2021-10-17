#pragma once


//链队列 用于二叉树的层序遍历

#include"LinkTree.h"


/*连队结点用来存放树形结点*/
typedef struct qNode {
	TreeNode* data;
	struct qNode* next;

}QueueNode;
//链队列

typedef struct {
	QueueNode* qFront;
	QueueNode* qRear;
	
}LinkQueue;


void InitLinkQueue(LinkQueue* linkQueue);

void enQueue(LinkQueue* linkQueue,TreeNode* data);

TreeNode* deQueue(LinkQueue* linkQueue);
 

int IsLinkQueueEmpty(LinkQueue* linkQueue);
