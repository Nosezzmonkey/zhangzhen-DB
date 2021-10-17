#include<stdio.h>
 enum Sex
 {
 	//枚举的可能取值 是常量，可以赋值初始值 
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
//	  enum Color c=BLUE;//c就成为了一个变量，并且只能在这些值中取值
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
 {//所有变量共用同一个空间，两个变量不能同时使用，改变其中一个，另一个也会变 
 	int i;
 	char c;
  } u;
  u.i=1;
  //返回1，表示小端
  //返回0，表示大端 

 return  u.c;
	
}
int main()
{	

int ret=check1();


if(ret==1){
	printf("小端");
	
}
else{
	printf("大端");
}
	
	
	return 0;
 } 
