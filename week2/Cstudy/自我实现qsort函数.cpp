#include<stdio.h>
#include"Stu.h"
void swap(char *x,char *y,int width){
	int i=0;
	for(i=0;i<width;i++){
		char temp=*x;
		*x=*y;
		*y=temp;
		x++;
		y++;
		
		
	}
	
	
	
}
void bubble(void * arr,int sz,int width,int (*cmp)(const void *e1,const void*e2))
{
	int i=0;
	for(i=0;i<sz-1;i++){
		int j=0;
		for(j=0;j<sz-i-1;j++){
			
			if(cmp((char*)arr+j*width,(char*)arr+(j+1)*width)>0){
				
				swap((char*)arr+j*width,(char*)arr+(j+1)*width,width);
				
			}
			
			
		}
		
		
		
	}
	
	
	
	
}
int cmp_by_age(const void* e1,const void *e2)
{
	return 	((struct Stu*)e1)->age -((struct Stu*)e2)->age; 
}
int main()
{
	struct Stu	s[3]= {{"章三",20},{"李四",30},{"网为",10}};
	int sz=sizeof(s)/sizeof(s[0]) ;
	bubble(s,sz,sizeof(s[0]),cmp_by_age);
		int j;
	for(j=0; j<sz; j++) {
		printf("%s\t%d\n",s[j].name,s[j].age);

	}
	return 0;
}
