#include<stdio.h>
#include<stdlib.h>
int check_sys()
{
	int a=1;

	return *(char*)&a;//p要不就是1  就是0 
//	if(*p==1)
//	return 1;  
//	else
//	return 0;
	
	
}
int main()
{
	//写一段代码告诉我们当前机器字节序是什么
	int ret=check_sys();
	if(ret==1)
	{
		
		printf("小段");
		
	}	
	else
	{
		printf("大端");
	}
	
	return 0;
}
