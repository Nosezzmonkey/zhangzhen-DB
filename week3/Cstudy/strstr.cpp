#include<stdio.h>
#include<string.h>
#include<assert.h>

//KMP�㷨    
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
		s1=cur;//s1�ع鵽��ʼ����ʱ��λ��

		s2=p2;//ÿ�β���ʹs2��s2��ʼ��

		while ((*s2)&&(*s1==*s2)&& (*s1)) {  //*s2   ==   *s2!='\0' 
			s1++;
			s2++;


		} 														
		if(!*s2) { //�����Ӵ�����֮��û�������˵���ҵ� �� 		!*s2   ��˼��˵ Ҫ��s2=='\0' 
			return cur;
		}
		if(!*s1) {
			return NULL;//ԭ���������˾�û��Ҫ�ٶ�֮��Ľ��в����ˣ�ʣ�µĸ����Լ� 
		}
		cur++;
	}


	return NULL;//�Ҳ����Ӵ�
}
int main () {
	const char *p1="abcddefdef";
	const char *p2="def";
//	char *ret=strstr(p1,p2);
const char *ret =my_strstr(p1,p2);
	if(ret==NULL) {
		printf("�Ӵ�������\n");

	} else {
		printf("%s\n",ret);//ע�� strstr���ص������ҵ����Ӵ���Ԫ�صĵ�ַ

	}



	return 0;
}
