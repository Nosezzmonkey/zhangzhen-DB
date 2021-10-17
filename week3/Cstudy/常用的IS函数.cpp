#include<stdio.h>
#include<ctype.h>
int main() {
//	char ch='z';
//	int ret=islower(ch);
//	printf("%d\n",ret);

	char ch=tolower('Q');
//	putchar(ch);
	printf("%c\n",ch);
	char arr[]="I Am A Student";


	int i=0;

	while (arr[i]) {


		arr[i]=tolower(arr[i]);

		i++;
	}

	printf("%s\n",arr);
	return 0;
}
