#include<stdio.h>
#include<string.h>
#include<errno.h>
int main() {
	//�����ǵĴ�����ת���ɴ�����Ϣ�����û��Ƚ����׿���
	//������  ������Ϣ����
	//0    - NO error
	// 1     Operation not permitted
	// 2     No such file or directory

	//errno ȫ�ֵ�һ���������������C���Կ⺯��ִ�й����г��ִ��󣬾ͻ�ɴ����븳ֵ��errno��
//	char* str=strerror(errno);


	FILE *pf=fopen("�ַ����ڴ溯���Ľ���.txt","r");
	if(pf==NULL) {
	printf("%s\n",strerror(errno));//��Ҫ�ж��Ƿ�ɹ�����ĳ�� ��ʧ�ܵ�ʱ���������ʾ 
	}
	else
	{
		printf("open file success\n");
	}
		


//	printf("%s\n",str)	;
	return 0;
}
