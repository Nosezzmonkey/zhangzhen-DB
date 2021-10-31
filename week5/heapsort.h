#pragma once
#include"ElementType.h"
#define  LeftChild(i) (2*(i)+1)//定义左孩子为 2i+1
void PercDown(ElementType A[], int i, int N) {//大小为N的数组，让第i个结点满足大根堆的性质

	int Child;
	ElementType Tmp;
	for (Tmp = A[i]; LeftChild(i) < N; i = Child) {
		Child = LeftChild(i);
		if (Child != N - 1 && A[Child + 1] > A[Child])
			Child++;//如果左孩子没有右孩子大，就把孩子看成右孩子，来与父亲结点进行比较
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
		PercDown(A, i, N);//将输入的数组A构造为大根堆结构,从数组大小为一半的开始，逐渐减一，既可以保证数组变为大根堆的结构
	}
	for (i = N - 1; i > 0; i--) {
		Swap(&A[0], &A[i]);//根结点与尾结点互换
		PercDown(A, 0, i);
	}

}