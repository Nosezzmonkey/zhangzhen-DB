#pragma once
#include"ElementType.h"
 
void ShellSort(ElementType A[], int N) {
	int i, j, Increment;//定义增量
	ElementType Tmp;
	for (int Increment = N / 2; Increment > 0; Increment /= 2) {
		//初始定义增量为原来的一半，把原来的数组分为增量个数组，分别对每个小数组进行排序逐渐缩小为原来的二分之一
		for (int i = Increment; i < N; i++) {
			//此时为分别为每个小数组排序
			Tmp = A[i];//
			for (j = i; j >= Increment; j -= Increment) {
				if (Tmp < A[j - Increment]) {
					A[j] = A[j - Increment];//把左边的大的移动到右边去
				}
				else
					break;//如果前边的元素本身就比较小，那么内层循环直接跳出
				
			}
			A[j] = Tmp;//如果没有走break，此时还需要将原来的小元素放到前边，这时的j 已经减过了
			
	

		}


	}





}

