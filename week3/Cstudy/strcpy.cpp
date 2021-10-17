#include<stdio.h>
#include<assert.h>
char* my_strcpy(char *arr1, const char *arr2) {
assert(arr1!=NULL);
assert(arr2!=NULL);
char * ret=arr1;
//拷贝arr1指向的字符串到arr2指向的空间中，包含'\0' 
while(	*arr1++=*arr2++)//当赋给’\0‘时候循环停止，完成拷贝 
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
