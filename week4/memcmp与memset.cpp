#include<stdio.h>
#include <string.h>
#include<assert.h>

int main(){
	int arr1[5]= {1,2,3,4,5};
	int arr2[5]= {0};
	int ret=memcmp(arr1,arr2,1);//  �Ƚ��ڴ��ֽڵĴ�С ���ұ��ǱȽϵĶ����ֽ� 
	printf("%d\n",ret);
	char  arr[10]="";
	memset(arr,'#',9);
	printf("%s\n",&arr[0]+7) ;


	return 0;
} 
