#include<stdio.h>
#include<stdlib.h> 
#include<string.h>

void reverse(char * str){
	
//	int i=0
//	for(i=sz-1;i>0;i--)
//	{
//		printf("%s",arr[i]);
//	}
	int  len=strlen(str);//求长度         
	
	char *left=str;
	char * right=str+len-1;
while (left<right)
{
		char tmp=*left;
	*left=*right;
	*right=tmp;
	left++;
	right--;
	
	}	
	
}
int main()
{
	
	
char arr[256]={0};	
//	scanf("%s",arr);
	gets(arr);//读取一行 的函数 
	int sz=sizeof(arr)/sizeof(0);
	reverse(arr); 
	printf("%s\n",arr);
	
	return 0;
 } 
