#include<stdio.h>
#include<string.h>
#include<assert.h>
//�����ⷨ��һ��һ��Ų 
void leftmove1 (char* arr,int k)
{
	assert(arr);
	int i=0;
	int len=strlen(arr);
	for(i;i<k;i++){
		//��תһ���ַ�,ѭ��
		char temp=*arr;
		int j=0; 
	for(j=0;j<len-1;j++){
		*arr=*(arr+1);
			arr++;	
	
	}
	
		*arr=temp;
	arr=arr-len+1;
	
}

	
}

//������ת��

//abcdef
//ab  cdef
//ba  fedc 
//bafedc
//cdefab

void reverse(char * left,char *right) {
	assert(left!=NULL);
	assert(right!=NULL);
while (left<right)
{
		char tmp=*left;
	*left=*right;
	*right=tmp;
	left++;
	right--;
	
	}	
	
}
 
void leftmove2 (char* arr,int k){
	assert(arr);
	
	
	//��������������
	
	int len=strlen(arr);
	assert(k<=len);
	reverse(arr,arr+k-1);//������� 
		reverse(arr+k,arr+len-1);//�����ұ� 
			reverse(arr,arr+len-1);//�������� 
	 
	
	
	
}
int isleftmove(char * s1,char *s2){
	int len=strlen(s1);
	int i=0;
	for(i=0;i<len;i++){
		leftmove2 (s1,1);
		int ret=strcmp(s1,s2);
		if(ret==0){
			return 1;
				}
			}

return 0;
	
}
int isleftmove1(char * str1,char *str2)
{
	//abcdefabcdef
//	��s1�ַ�����׷��һ���Լ�  stract  stranct 
//   �Լ����Լ�׷�Ӳ�����  stract 
int len1=strlen(str1);
int len2=strlen(str2);
	if(len1!=len2)

	return 0;

strncat(str1,str1,6);  
  // strstr -���Ӵ�
  char *ret=strstr(str1,str2); 
   	if(ret==NULL)
   	{
   		return 0;
	   }
	   else{
	   	return 1;
	   }
   }
	
	
	
	//�����
	 
	

//
//int main(){
//	char arr[]="Abcdef";
//		
//	int k=0;
//	scanf("%d",&k);
//
//	leftmove2(arr,k);
//	
//	printf("%s\n",arr);
//	return 0;
//}

//�ж�һ���ַ����Ƿ�����ת������ 
int main(){
	char arr1[]="abcdef";
	char arr2[]="cdefab";
	int ret=isleftmove1(arr1,arr2);
	if(ret==1)
	printf("YES\n");
	else 
	printf("No\n");
	
	
	
	
}

