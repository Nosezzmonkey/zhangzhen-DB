#include<stdio.h>
int add(int x,int y){
 	return x+y;
 }
 int sub(int x,int y){
 	return x-y;
 }
 int mul(int x,int y){
 	return x*y;
 }
 int div(int x,int y){
 	return x/y;
 }
void menu()
{
	
	
}

int main ()

{	
 int input=0;
 int (*parr[5])(int ,int )={0,add,sub,mul,div};
 do{
 	menu();
 	printf("请选择:>");
 	scanf("%d",&input);
 	if(input>=1&&input<=4){
 			printf("请输入两个操作数：");
 	scanf("%d%d",&x,&y);
 	int ret=parr[input](x,y);
 	printf("%d\n",ret);
	 }else if(input==0){
	 	printf("退出\n");
	 }else{
	 	printf("选择错误\n");
	 }
 
 	
 }while(input);
	int(*p)(int ,int );//函数指针 
	int(*pfr[4])(int,int);//函数指针数组 
	int(*(*pparr)[4])(int ,int )=&pfr;//函数指针数组指针	
	
	
	return 0;
 } 
// void calc (int (*y)(int,int )){
// 	int x=0;
// 	int y=0;										//这种方法是把要用的函数传递过来，避免臃肿 
// 	printf("请输入两个操作数:>");
// 	scanf("%d%d",&x,&y);
// 	printf("%d\n",pf(x,y));
// 	
 
 
 
