#pragma once
#include"ElementType.h"
#define  LeftChild(i) (2*(i)+1)//��������Ϊ 2i+1
void PercDown(ElementType A[], int i, int N) {//��СΪN�����飬�õ�i������������ѵ�����

	int Child;
	ElementType Tmp;
	for (Tmp = A[i]; LeftChild(i) < N; i = Child) {
		Child = LeftChild(i);
		if (Child != N - 1 && A[Child + 1] > A[Child])
			Child++;//�������û���Һ��Ӵ󣬾ͰѺ��ӿ����Һ��ӣ����븸�׽����бȽ�
		if (Tmp < A[Child]) {
			A[i] = A[Child];

		}
		else
			break;
	}
	A[i] = Tmp;



}
void Swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;

}
void Heapsort(ElementType A[], int N) {

	int i;
	for (i = N / 2; i >= 0; i--) {
		PercDown(A, i, N);//�����������A����Ϊ����ѽṹ,�������СΪһ��Ŀ�ʼ���𽥼�һ���ȿ��Ա�֤�����Ϊ����ѵĽṹ
	}
	for (i = N - 1; i > 0; i--) {
		Swap(&A[0], &A[i]);//�������β��㻥��
		PercDown(A, 0, i);
	}

}