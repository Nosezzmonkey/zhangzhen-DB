#pragma once
#include"ElementType.h"


void InsertionSort(ElementType A[], int N)
{
	int i, j;
	ElementType tmp;
	for (i = 1; i < N; i++) {
			
		tmp = A[i];//��ֵ��ʱ�������������н�ÿ��Ԫ�ز��뵽���ʵ�λ��
		for (j = i; j > 0 && A[j-1] > tmp; j--) {
			A[j] = A[j - 1];//ֻҪ�������ͽ�������Ȼ�Ͳ�������˵���Ѿ��ź�������
				
			A[j] = tmp;//����ѭ�� �ı�tmp��ֵ��ʹ��ָ��ǰһ��
		}


	}


}
