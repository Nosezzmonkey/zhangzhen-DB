#pragma once
#include"ElementType.h"


void merge(ElementType r[], ElementType s[], int left, int right, int mid)
//针对r分组两个已经排序好的数组，，s为要合并为的新数组
{
	
	int i, j, k;
	i = left;
	j = mid+1;
	k = left;

	while (i <= mid && j <= right) {
		if (r[i] <= r[j]) {

			s[k++] = r[i++];//小的 数指针右移动，并把数放到新数组中
		}
		else
		{
			s[k++] = r[j++];
		}

	}
	while(i <= mid) {
		s[k++] = r[i++];//右半部分数组已经遍历完了

	}

	while (j <=right) {
		s[k++] = r[j++];//左半数组已经遍历完了
	}
	for (int i = 0; i < right; i++)
	{
		r[i] = s[i];//将新数组的元素拷贝到原数组当中
	}

}


int merge_sort(ElementType r[], ElementType s[], int left, int right) {
	
	int mid;
	int t[20];
	if (left == right) {
		s[left] = s[right];//当分为的数组大小为1时，就直接返回了
	}
	else
	{
		mid = (left + right) / 2;
		merge_sort(r, t, left, mid);//对左边的数组进行划分
		merge_sort(r, t, mid + 1, right);//对右边的数组进行划分
		merge(t, s, left, mid, right);//对所有数组分完后进行合并


	}

}