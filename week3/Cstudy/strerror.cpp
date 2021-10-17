#include<stdio.h>
#include<string.h>
#include<errno.h>
int main() {
	//把我们的错误吗转换成错误信息，让用户比较容易看懂
	//错误码  错误信息描述
	//0    - NO error
	// 1     Operation not permitted
	// 2     No such file or directory

	//errno 全局的一个错误码变量，当C语言库函数执行过程中出现错误，就会吧错误码赋值到errno中
//	char* str=strerror(errno);


	FILE *pf=fopen("字符串内存函数的介绍.txt","r");
	if(pf==NULL) {
	printf("%s\n",strerror(errno));//需要判断是否成功做到某事 ，失败的时候给予你提示 
	}
	else
	{
		printf("open file success\n");
	}
		


//	printf("%s\n",str)	;
	return 0;
}
