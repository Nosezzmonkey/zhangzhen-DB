#include<stdio.h>
int FindNum(int arr[3][3],int k,int *row,int *col) {
	int x=0;
	int y=*col-1;

	while(y>=0&&x<=*row-1) {
		if(arr[x][y]>k) {
			y--;

		} else if
		((arr[x][y]<k)) {
			x++;
		} else {
			
			*row=x;;
			*col=y;
			return 1;
		}
	}//找不到
	*row=-1;
	*col=-1;
	return 0; 

}
int main() {

	int arr[3][3]= {{1,2,3},{4,5,6},{7,8,9}};
	int k=7;
	int x=3;
	int y=3;
	int ret=FindNum(arr,k,&x,&y);
	if(ret==1) {
		printf("%d  %d\n",x,y);
		printf("找到了");

	} else {

		printf("没找到");
	}
	return 0;
}
