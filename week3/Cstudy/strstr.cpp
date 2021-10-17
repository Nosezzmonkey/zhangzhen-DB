#include<stdio.h>
#include<string.h>
#include<assert.h>

//KMP算法    
const char * my_strstr(const char* p1,const char*p2) {
	assert(p1!=NULL);
	assert(p2!=NULL);
	char *s1=(char *)p1;
const 	char *s2=p2;
	char *cur=(char*)p1;
	if(*p2=='\0') {
		return (char*)p1;
	}
	while(*cur) {
		s1=cur;//s1回归到开始查找时的位置

		s2=p2;//每次查找使s2从s2开始走

		while ((*s2)&&(*s1==*s2)&& (*s1)) {  //*s2   ==   *s2!='\0' 
			s1++;
			s2++;


		} 														
		if(!*s2) { //当把子串找完之后没有问题就说明找到 了 		!*s2   意思是说 要是s2=='\0' 
			return cur;
		}
		if(!*s1) {
			return NULL;//原串都找完了就没必要再对之后的进行查找了，剩下的个数以及 
		}
		cur++;
	}


	return NULL;//找不到子串
}
int main () {
	const char *p1="abcddefdef";
	const char *p2="def";
//	char *ret=strstr(p1,p2);
const char *ret =my_strstr(p1,p2);
	if(ret==NULL) {
		printf("子串不存在\n");

	} else {
		printf("%s\n",ret);//注意 strstr返回的是你找到的子串首元素的地址

	}



	return 0;
}
