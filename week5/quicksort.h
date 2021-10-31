#pragma once
#include"ElementType.h"
#include"InsertionSort.h"
void Swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;

}

ElementType Median3(ElementType A[], int left, int right)
{	

	int center = (left + right) / 2;
	if (A[left] > A[center])
		Swap(&A[left], &A[center]);
	if (A[left] > A[right])
		Swap(&A[left], &A[right]);

	if (A[center] > A[right])
		Swap(&A[center], &A[right]);
//�Ѵ�����ƶ���������Ҷˣ�С���ƶ����Ҷˣ���֤���鲻��Խ��
	Swap(&A[center], &A[right - 1]);//����ŦԪ���ƶ��������ڶ���λ��

	return A[right - 1];
}
void quicksort(ElementType A[], int left, int right) {
	int i, j;
	int Cutoff = 10;
	ElementType Pivot;
	if (left + Cutoff <= right)
	{
		Pivot = Median3(A, left, right);
		i = left; j = right - 1;
		while (1) {
			while (A[++i] < Pivot) {}//����������飬�ҵ�������ŦԪ�ص�ֵͣ����
			while (A[--j] > Pivot) {}//���ұ������飬�ҵ�С ����ŦԪ�ص�ֵͣ����
			if (i < j) {
				Swap(&A[i], &A[j]);
			}
			else
				break;


		}
		Swap(&A[i], &A[right - 1]);
		quicksort(A, left, i - 1);//��ʱ����ŦԪ�ص���߲�������ʹ�ÿ�������

		quicksort(A, i + 1, right);//��ʱ����ŦԪ�ص��ұ߲�������ʹ�ÿ�������

	}
	else
		InsertionSort(A + left, right - left + 1);//����С�����飬��ֱ�ӽ��в����������

}