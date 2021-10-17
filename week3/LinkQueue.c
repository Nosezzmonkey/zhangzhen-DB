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
	linkQueue->qRear->next = node;//����βָ�����һ��ָ�� Ҫ��ӵ�Ԫ��
	linkQueue->qRear = node;//�ٰ�βָ������ƶ�һλ

}

TreeNode* deQueue(LinkQueue* linkQueue)
{	
	TreeNode* data = NULL;//�������س��ӵĽ��
	if (linkQueue->qFront == linkQueue->qRear) return data;
	QueueNode* node = linkQueue->qFront->next;//��node��ֵΪҪ���ӵ�Ԫ��
	data = node->data;//�����صĽ�㸳ֵ
	linkQueue->qFront = node;//��ͷָ�������ƶ�һλ
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
