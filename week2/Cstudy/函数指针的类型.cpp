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
 	printf("��ѡ��:>");
 	scanf("%d",&input);
 	if(input>=1&&input<=4){
 			printf("������������������");
 	scanf("%d%d",&x,&y);
 	int ret=parr[input](x,y);
 	printf("%d\n",ret);
	 }else if(input==0){
	 	printf("�˳�\n");
	 }else{
	 	printf("ѡ�����\n");
	 }
 
 	
 }while(input);
	int(*p)(int ,int );//����ָ�� 
	int(*pfr[4])(int,int);//����ָ������ 
	int(*(*pparr)[4])(int ,int )=&pfr;//����ָ������ָ��	
	
	
	return 0;
 } 
// void calc (int (*y)(int,int )){
// 	int x=0;
// 	int y=0;										//���ַ����ǰ�Ҫ�õĺ������ݹ���������ӷ�� 
// 	printf("����������������:>");
// 	scanf("%d%d",&x,&y);
// 	printf("%d\n",pf(x,y));
// 	
 
 
 
