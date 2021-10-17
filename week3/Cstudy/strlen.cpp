#include<stdio.h>
#include<assert.h>
int mystrlen(const char * str){
	assert(str!=NULL);
	int count=0;
	while(*str!='\0'){
		count++;
		str++;
		
	}
	return count;
	
}

int main(){
	
	int len=mystrlen("abcdef"); 
	printf("%d",len);
	
	return 0;
	
} 
