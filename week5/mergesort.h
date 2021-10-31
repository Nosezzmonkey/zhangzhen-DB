#pragma once
#include"ElementType.h"


void merge(ElementType r[], ElementType s[], int left, int right, int mid)
//���r���������Ѿ�����õ����飬��sΪҪ�ϲ�Ϊ��������
{
	
	int i, j, k;
	i = left;
	j = mid+1;
	k = left;

	while (i <= mid && j <= right) {
		if (r[i] <= r[j]) {

			s[k++] = r[i++];//С�� ��ָ�����ƶ����������ŵ���������
		}
		else
		{
			s[k++] = r[j++];
		}

	}
	while(i <= mid) {
		s[k++] = r[i++];//�Ұ벿�������Ѿ���������

	}

	while (j <=right) {
		s[k++] = r[j++];//��������Ѿ���������
	}
	for (int i = 0; i < right; i++)
	{
		r[i] = s[i];//���������Ԫ�ؿ�����ԭ���鵱��
	}

}


int merge_sort(ElementType r[], ElementType s[], int left, int right) {
	
	int mid;
	int t[20];
	if (left == right) {
		s[left] = s[right];//����Ϊ�������СΪ1ʱ����ֱ�ӷ�����
	}
	else
	{
		mid = (left + right) / 2;
		merge_sort(r, t, left, mid);//����ߵ�������л���
		merge_sort(r, t, mid + 1, right);//���ұߵ�������л���
		merge(t, s, left, mid, right);//����������������кϲ�


	}

}