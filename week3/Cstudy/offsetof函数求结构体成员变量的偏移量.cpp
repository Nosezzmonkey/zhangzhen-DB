#include<stdio.h>
#include<stddef.h> 
struct S{
	char c;
	int i;
	double d;
}SS;

int main(){
	printf("%d\n",offsetof(struct S,c));//c���S��ƫ���� Ϊ  0 
		printf("%d\n",offsetof(struct S,i));// i ���S��ƫ���� Ϊ  4
			printf("%d\n",offsetof(struct S,d));// d ���S��ƫ���� Ϊ  8


	return 0;
}
