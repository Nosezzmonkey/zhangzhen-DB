#include<stdio.h>
int main()
{
//	int a[]={1,2,3,4} ;//��ַ��СΪ4��8  
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
//	printf("%d\n",sizeof(&a+1)); // 4   �����������飬���ǻ��ǵ�ַ 
//	printf("%d\n",sizeof(&a[0]));  // 4  8 
//
//
//	printf("%d\n",sizeof(&a[0]+1));// 4  8		
//	printf("%d\n",sizeof(arr[0]+1))// 4  a[o]�ǵ�һ������ĵ�ַ��+1�ǵ�һ�еڶ���Ԫ�ص�ַ 
//	printf("%d\n",sizeof(arr+1)   //�ڶ��еĵ�ַ  4 
	int a[5][5];
	int (*p)[4];
	p=a;
	printf("%p,%d\n",&p[4][2]-&a[4][2],&p[4][2]-&a[4][2]);
	p[4][2]==*((*p+4)+2);
	ָ���ָ����֮��Ԫ�صĸ���  ��� FFFFFFC -4 
	return 0;
	
	
 }  

  
  
  
  
