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
//把大的数移动到数组的右端，小的移动到右端，保证数组不会越界
	Swap(&A[center], &A[right - 1]);//将枢纽元素移动到倒数第二个位置

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
			while (A[++i] < Pivot) {}//从左遍历数组，找到大于枢纽元素的值停下来
			while (A[--j] > Pivot) {}//从右遍历数组，找到小 于枢纽元素的值停下来
			if (i < j) {
				Swap(&A[i], &A[j]);
			}
			else
				break;


		}
		Swap(&A[i], &A[right - 1]);
		quicksort(A, left, i - 1);//此时将枢纽元素的左边部分重新使用快速排序

		quicksort(A, i + 1, right);//此时将枢纽元素的右边部分重新使用快速排序

	}
	else
		InsertionSort(A + left, right - left + 1);//对于小的数组，就直接进行插入排序更简单

}