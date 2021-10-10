#include<stdio.h>
#include<string.h>
int main(){
	int i=0;
	
	for(i;i<=100000;i++){
	int sum=0;	
		//判断i是否为水仙花数(自旻数) 
		//计算i的位数
		//计算i的每一位的n次方之和 sum 
		//比较i==sum 
		int n=1;
		int  tmp=i;//设立中间变量 
		while (tmp/=10)
		{
			n++;
//			i=i/10;
		}
		tmp=i;//i=123;
		 while(tmp)
		 {
		 	sum=sum+(int)pow(tmp%10,n);//pow返回的是double类型的数据，强制类型转换一下 
		 	tmp/=10;// 12
		 }
		if(i==sum){
			printf("%d\n",i);
		}
		
		
	}
	
	
	
	
	
	return 0; 
	}
	
	
	 
