#include<stdio.h>
#include<string.h>
int main(){
	int i=0;
	
	for(i;i<=100000;i++){
	int sum=0;	
		//�ж�i�Ƿ�Ϊˮ�ɻ���(�ԕF��) 
		//����i��λ��
		//����i��ÿһλ��n�η�֮�� sum 
		//�Ƚ�i==sum 
		int n=1;
		int  tmp=i;//�����м���� 
		while (tmp/=10)
		{
			n++;
//			i=i/10;
		}
		tmp=i;//i=123;
		 while(tmp)
		 {
		 	sum=sum+(int)pow(tmp%10,n);//pow���ص���double���͵����ݣ�ǿ������ת��һ�� 
		 	tmp/=10;// 12
		 }
		if(i==sum){
			printf("%d\n",i);
		}
		
		
	}
	
	
	
	
	
	return 0; 
	}
	
	
	 
