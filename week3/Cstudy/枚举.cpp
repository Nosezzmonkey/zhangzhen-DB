#include<stdio.h>
 enum Sex
 {
 	//ö�ٵĿ���ȡֵ �ǳ��������Ը�ֵ��ʼֵ 
MALE,
FEMALE,
SECRET 		
 	
 };
 enum Color{
 	RED,
 	GREEN,
 	BLUE
 };
 
 
 
// int main()
// {
// 	enum Sex s= MALE;
//	  enum Color c=BLUE;//c�ͳ�Ϊ��һ������������ֻ������Щֵ��ȡֵ
//	  printf("%d",GREEN) ;
// 	
// 	return 0;
// }

int check()
{
	int a =1;
	return *(char*)&a;
}
int check1(){
	union Un
 {//���б�������ͬһ���ռ䣬������������ͬʱʹ�ã��ı�����һ������һ��Ҳ��� 
 	int i;
 	char c;
  } u;
  u.i=1;
  //����1����ʾС��
  //����0����ʾ��� 

 return  u.c;
	
}
int main()
{	

int ret=check1();


if(ret==1){
	printf("С��");
	
}
else{
	printf("���");
}
	
	
	return 0;
 } 
