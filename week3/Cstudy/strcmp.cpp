#include<stdio.h>
#include<string.h>
#include<assert.h> 
int my_strcmp(const char * str1,const char *str2){
	assert(str1&&str2);
	while(*str1==*str2)
	{	
	if(*str1=='\0'){
		return 0;//相等 
	}
		str1++;
		str2++;
	}
	if(*str1>*str2)
	{
		return 12;
	}else 
	{
		return -12;
	}
//	return (*str1-*str2);
}
int main()
{
	const  char *p1="abcdef";
	const  char *p2="sqwer";
	//strcmp本质上比的是ascall值
	//p1> p2  1
	//p1=p2   0
	//p1<p2   -1 
	int ret=strcmp(p1,p2);

	printf("%c\n",*(p1+1));
	printf("%d\n",ret);
	return 0;
 } 
