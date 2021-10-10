#include<stdio.h>
int main()
{
//	int a[]={1,2,3,4} ;//地址大小为4或8  
//	int  arr[][]={0};
//	printf("%d\n",sizeof(a));// 16
//	
//
//	printf("%d\n",sizeof(a+0));// 4   8
//
//	printf("%d\n",sizeof(*a));// 4
//
//	printf("%d\n",sizeof(a+1)); //4  8
//
//	printf("%d\n",sizeof(a[1])); //  4
//
//	printf("%d\n",sizeof(&a));//  4  8
//
//	printf("%d\n",sizeof(*&a));//  16
//
//	printf("%d\n",sizeof(&a+1)); // 4   跳过整个数组，但是还是地址 
//	printf("%d\n",sizeof(&a[0]));  // 4  8 
//
//
//	printf("%d\n",sizeof(&a[0]+1));// 4  8		
//	printf("%d\n",sizeof(arr[0]+1))// 4  a[o]是第一行数组的地址，+1是第一行第二个元素地址 
//	printf("%d\n",sizeof(arr+1)   //第二行的地址  4 
	int a[5][5];
	int (*p)[4];
	p=a;
	printf("%p,%d\n",&p[4][2]-&a[4][2],&p[4][2]-&a[4][2]);
	p[4][2]==*((*p+4)+2);
	指针减指针是之间元素的个数  结果 FFFFFFC -4 
	return 0;
	
	
 }  

  
  
  
  
