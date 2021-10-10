#include<stdio.h>
int main() {
	//只有奇数行能打印
	int line=0;
	scanf("%d",&line);//所以让输入上半部分的行数
//	int i=1;
	int tmp=line;
//	for(i=1; i<=tmp; i++) {
//		int n=line;
//		while(--n) {
//			printf(" ");
//
//		}
//		int j=0;
//		for(j; j<2*i-1; j++) {
//			printf("*");
//		}
//		line--;
//		printf("\n");
//	
//
//		}

//打印上半部分
int i=1;
	for(i=1; i<=tmp; i++){
		int z=0;
		for(z;z<tmp-i;z++)
		{
			printf(" ");
		}
		for(z=0;z<2*i-1;z++){
			printf("*");
		}
		printf("\n");
	}

		//打印下半部分
	for(i=1; i<tmp; i++){
		int k=0;
		for(k;k<i;k++)
		{
			printf(" ");
			
		}
		
		for(k=0;k<2*(tmp-i)-1;k++){
			printf("*");
		}
		printf("\n");
		
	}




	return 0;
}
