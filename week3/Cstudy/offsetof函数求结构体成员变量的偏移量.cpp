#include<stdio.h>
#include<stddef.h> 
struct S{
	char c;
	int i;
	double d;
}SS;

int main(){
	printf("%d\n",offsetof(struct S,c));//c相对S的偏移量 为  0 
		printf("%d\n",offsetof(struct S,i));// i 相对S的偏移量 为  4
			printf("%d\n",offsetof(struct S,d));// d 相对S的偏移量 为  8


	return 0;
}
