#pragma once
#include"ElementType.h"


void InsertionSort(ElementType A[], int N)
{
	int i, j;
	ElementType tmp;
	for (i = 1; i < N; i++) {
			
		tmp = A[i];//赋值临时变量，用来进行将每组元素插入到合适的位置
		for (j = i; j > 0 && A[j-1] > tmp; j--) {
			A[j] = A[j - 1];//只要大于他就交换，不然就不交换，说明已经排好序列了
				
			A[j] = tmp;//内曾循环 改变tmp的值，使他指向前一个
		}


	}


}
