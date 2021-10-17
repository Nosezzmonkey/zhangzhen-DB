#include"LinkQueue.h"


void InitLinkQueue(LinkQueue* linkQueue)
{
	linkQueue->qFront = (QueueNode*)malloc(sizeof(QueueNode));
	linkQueue->qFront->next = NULL;
	linkQueue->qRear = linkQueue->qFront;

}
void enQueue(LinkQueue* linkQueue, TreeNode* data) {
	QueueNode *node=(QueueNode*)malloc(sizeof(QueueNode));
	node->data = data;
	node->next = NULL;
	linkQueue->qRear->next = node;//现在尾指针的下一个指向 要入队的元素
	linkQueue->qRear = node;//再把尾指针向后移动一位

}

TreeNode* deQueue(LinkQueue* linkQueue)
{	
	TreeNode* data = NULL;//用来返回出队的结点
	if (linkQueue->qFront == linkQueue->qRear) return data;
	QueueNode* node = linkQueue->qFront->next;//将node赋值为要出队的元素
	data = node->data;//将返回的结点赋值
	linkQueue->qFront = node;//将头指针往后移动一位
	if (linkQueue->qFront->next == node) {
		linkQueue->qRear = linkQueue->qFront;
	}
	free(node);
	return data;

}
int IsLinkQueueEmpty(LinkQueue* linkQueue) {
	if (linkQueue->qFront == linkQueue->qRear) {
		return 1;

	}
	return 0;
}
