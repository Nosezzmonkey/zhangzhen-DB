#include<stdio.h>
#include<assert.h>
char* my_strcpy(char *arr1, const char *arr2) {
assert(arr1!=NULL);
assert(arr2!=NULL);
char * ret=arr1;
//����arr1ָ����ַ�����arr2ָ��Ŀռ��У�����'\0' 
while(	*arr1++=*arr2++)//��������\0��ʱ��ѭ��ֹͣ����ɿ��� 
{

;
}

return ret;
}
int main() {
	char arr1[]="abcdefghi";
	char arr2[]="bit";
//	strcpy(arr1,arr2);
	my_strcpy(arr1,arr2);

printf("%s\n",arr1);

	return 0;
}
