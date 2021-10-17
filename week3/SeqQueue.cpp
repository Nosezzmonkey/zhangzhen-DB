#include"SeqQueue.h"
//实现队列的初始化
void InitSeqQueue(SeqQueue* seqQueue) {
	if (seqQueue == NULL) {
		seqQueue = (SeqQueue*)malloc(sizeof(SeqQueue));
	}
	if (seqQueue) {
		seqQueue->length = 0;
		seqQueue->front = 0;
		seqQueue->rear = 0;
	}
	
}

//以TRUE和FALSE 的方式返回传入的队列是否为空
State IsSeqQueueEmpty(SeqQueue* seqQueue) {
	return seqQueue->front == seqQueue->rear ? TRUE : FALSE;

}

//判断队列是否已满
State IsSeqQueueFull(SeqQueue* seqQueue) {
	if ((seqQueue->rear + 1) % MAX_SIZE == seqQueue->front) {
		return TRUE;//队列满了
	}
	return FALSE;
}

//入队操作
State OfferSeqQueue(SeqQueue* seqQueue, ElementType element) {
	if (IsSeqQueueFull(seqQueue)) {
		return  STATE_FALSE;
	}
	seqQueue->data[seqQueue->rear] = element;
	seqQueue->rear = (seqQueue->rear + 1) % MAX_SIZE;//将队尾指针向后移一位
	seqQueue->length++;
	return STATE_OK;
}
//出队操作
State PollSeqQueue(SeqQueue* seqQueue, ElementType* element) {
	if (IsSeqQueueEmpty(seqQueue) ){
		
		return STATE_FALSE;
	}
	*element = seqQueue->data[seqQueue->front];//先取出队头元素
	
	seqQueue->front = (seqQueue->front + 1) % MAX_SIZE;
	seqQueue->length--;

		return STATE_OK;
}
