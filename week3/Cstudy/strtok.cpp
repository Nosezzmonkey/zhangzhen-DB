#include<stdio.h>
#include<string.h> 

int main()
{
//  strtok  ������ı䱻�������ַ�����һ��ʹ�õ�ʱ�򶼻��ȿ���һ��
// �ҵ���һ���ָ��֮�� �����Ϊ'\0'  ���������// �����ڲ���һ�ֹ��ܻ��ס��һ�εĵ������������strtok�������Ӧ�ô���һ�־�̬������������ 
//Ȼ��ڶ������ô���ָ�������	
	char arr[]="zpw.biteu.tech";
	 char *p="@.";
	char buf[1024]={0};
//	//�ȿ���һ�ݵ�buf�� 
//	strcpy(buf,arr);
//	// Ȼ������и�
//	char *ret=strtok(arr,p) ;
//	printf("%s\n",ret);
//	//�ڶ������õ�ʱ�򴫿�ָ����� ��
//	ret=strtok(NULL,p); 
//		printf("%s\n",ret);
//			ret=strtok(NULL,p); 
//		printf("%s\n",ret);

//�򻯵�д������  forѭ��
char *ret=NULL;
  for(ret=strtok(arr,p);ret!=NULL;ret=strtok(NULL,p)){//for ѭ���ĳ�ʼ������ֻ������һ�Σ��Ժ󽫻��������NULL�� 
  	printf("%s\n",ret);
  } 

	
	
	
	return 0;
}
