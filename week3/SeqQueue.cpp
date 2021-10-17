#include"SeqQueue.h"
//ʵ�ֶ��еĳ�ʼ��
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

//��TRUE��FALSE �ķ�ʽ���ش���Ķ����Ƿ�Ϊ��
State IsSeqQueueEmpty(SeqQueue* seqQueue) {
	return seqQueue->front == seqQueue->rear ? TRUE : FALSE;

}

//�ж϶����Ƿ�����
State IsSeqQueueFull(SeqQueue* seqQueue) {
	if ((seqQueue->rear + 1) % MAX_SIZE == seqQueue->front) {
		return TRUE;//��������
	}
	return FALSE;
}

//��Ӳ���
State OfferSeqQueue(SeqQueue* seqQueue, ElementType element) {
	if (IsSeqQueueFull(seqQueue)) {
		return  STATE_FALSE;
	}
	seqQueue->data[seqQueue->rear] = element;
	seqQueue->rear = (seqQueue->rear + 1) % MAX_SIZE;//����βָ�������һλ
	seqQueue->length++;
	return STATE_OK;
}
//���Ӳ���
State PollSeqQueue(SeqQueue* seqQueue, ElementType* element) {
	if (IsSeqQueueEmpty(seqQueue) ){
		
		return STATE_FALSE;
	}
	*element = seqQueue->data[seqQueue->front];//��ȡ����ͷԪ��
	
	seqQueue->front = (seqQueue->front + 1) % MAX_SIZE;
	seqQueue->length--;

		return STATE_OK;
}
