#include<stdio.h>
#include<stdlib.h>
int check_sys()
{
	int a=1;

	return *(char*)&a;//pҪ������1  ����0 
//	if(*p==1)
//	return 1;  
//	else
//	return 0;
	
	
}
int main()
{
	//дһ�δ���������ǵ�ǰ�����ֽ�����ʲô
	int ret=check_sys();
	if(ret==1)
	{
		
		printf("С��");
		
	}	
	else
	{
		printf("���");
	}
	
	return 0;
}
