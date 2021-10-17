#include<stdio.h>
#include<string.h> 

int main()
{
//  strtok  函数会改变被操作的字符串，一般使用的时候都会先拷贝一份
// 找到第一个分割符之后 将其改为'\0'  返回这个串// 函数内部有一种功能会记住上一次的调用情况，所以strtok函数里边应该存在一种静态变量，不销毁 
//然后第二次再用传空指针就行了	
	char arr[]="zpw.biteu.tech";
	 char *p="@.";
	char buf[1024]={0};
//	//先拷贝一份到buf中 
//	strcpy(buf,arr);
//	// 然后进行切割
//	char *ret=strtok(arr,p) ;
//	printf("%s\n",ret);
//	//第二次再拿的时候传空指针就行 了
//	ret=strtok(NULL,p); 
//		printf("%s\n",ret);
//			ret=strtok(NULL,p); 
//		printf("%s\n",ret);

//简化的写法利用  for循环
char *ret=NULL;
  for(ret=strtok(arr,p);ret!=NULL;ret=strtok(NULL,p)){//for 循环的初始化部分只会运行一次，以后将会继续调用NULL的 
  	printf("%s\n",ret);
  } 

	
	
	
	return 0;
}
