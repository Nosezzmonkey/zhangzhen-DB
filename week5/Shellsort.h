#pragma once
#include"ElementType.h"
 
void ShellSort(ElementType A[], int N) {
	int i, j, Increment;//��������
	ElementType Tmp;
	for (int Increment = N / 2; Increment > 0; Increment /= 2) {
		//��ʼ��������Ϊԭ����һ�룬��ԭ���������Ϊ���������飬�ֱ��ÿ��С���������������СΪԭ���Ķ���֮һ
		for (int i = Increment; i < N; i++) {
			//��ʱΪ�ֱ�Ϊÿ��С��������
			Tmp = A[i];//
			for (j = i; j >= Increment; j -= Increment) {
				if (Tmp < A[j - Increment]) {
					A[j] = A[j - Increment];//����ߵĴ���ƶ����ұ�ȥ
				}
				else
					break;//���ǰ�ߵ�Ԫ�ر���ͱȽ�С����ô�ڲ�ѭ��ֱ������
				
			}
			A[j] = Tmp;//���û����break����ʱ����Ҫ��ԭ����СԪ�طŵ�ǰ�ߣ���ʱ��j �Ѿ�������
			
	

		}


	}





}

