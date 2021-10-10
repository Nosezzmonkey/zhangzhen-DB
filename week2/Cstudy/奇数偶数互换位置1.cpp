#include<stdio.h>
void move(int arr[],int sz){
	
	int left=0;
	int right=sz-1;
while(left<right)
{	//´Ó×ó±ßÕÒÅ¼Êý 
	while((left<right)&&arr[left]%2==1){
		left++;
	}
	while((left<right)&&arr[right]%2==0){
		right--;
	}
	if(left<right)
	{
		int tmp=arr[left];
		arr[left]=arr[right];
		arr[right]=tmp;
	}
	
}
}
int main()
{
	int arr[]={2,4,3,46,5,6,7,8,9,10};
	int sz=sizeof(arr)/sizeof(arr[0]);
	move(arr,sz);
	int i=0;
	for(i=0;i<10;i++)
	{
	
		printf("%d\n",arr[i]);
	}
	
	return 0;
 } 
