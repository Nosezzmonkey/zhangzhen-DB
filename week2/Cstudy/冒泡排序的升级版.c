#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"stu.h" 
//int main()
//{
//	int *arr[10];//指针数组
//	//指针数组的指针   数组指针
//	int *	(*pa)[10]=&arr;
//	//函数指针
//	int (*padd)(int ,int)=Add;//&add
//	(*padd)(1,2);
//	padd(1,2);
//	(**padd)(1,2);
//	//函数指针的数组
//	int (*parr[5])(int ,int ) ;
//	//指向函数指针数组的指针
//	int (*(*parr)[5])(int ,int)=&parr;
//
//	return 0;
//}

void bubble(int arr[],int sz) {

	int i=0;
	for(i=0; i<sz-1; i++) {
		int j=0;
		for(j=0; j<sz-i-1; j++) {
			if(arr[j]>arr[j+1]) {
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;

			}

		}




	}



}
int cmp_int(const void* e1,const void *e2) {

	//void*  类型的指针可以存放任何类型的指针
	//但是不能解引用
	// 需要强制类型转换
	return *(int *)e1-*(int*)e2;
}
int cmp_float(const void* e1,const void *e2)
{
//		if (*(float *)e1==*(float*)e2)
//			return 0;
//			else if(*(float *)e1>*(float*)e2)
//return 1;
//else 
//return -1;
 return ( (int)(*(float *)e1-*(float*)e2)); //要把结果强制转换为整形，上边为另一种方发 
}			
int cmp_by_age(const void* e1,const void *e2)
{
	return 	((struct Stu*)e1)->age -((struct Stu*)e2)->age; 
}
int cmp_by_name(const void* e1,const void *e2){
	
	return  strcmp(((struct Stu*)e1)->name ,((struct Stu*)e2)->name);//字符串比较函数，返回值依然 1》2 返回》0 1《2 返回 《0 
//	return  	((struct Stu*)e1)->name -((struct Stu*)e2)->name; //字符串不能直接这样比较，应该用strcmp比较字符串的大小 
}


void test1() {
	int arr[10]= {9,8,7,6,5,4,3,2,1,0};
	int sz=sizeof(arr)/sizeof(arr[0]);
	qsort(arr,sz,sizeof(arr[0]),cmp_int);
	int i=0;
	for(i=0; i<sz; i++) {
		printf("%d",arr[i]);

	}
	


}
void test2() {
	float f[10]= {9.0,8.0,7.0,6.0,5.0,4.0,3.0,2.0,1.0};
	int sz=sizeof(f)/sizeof(f[0]);
	qsort(f,sz,sizeof(f[0]),cmp_float);
int j=0;
	for(j=0; j<sz; j++) {
		printf("%f\n",f[j]);

	}
	}
void test3()

	{
	struct Stu	s[3]= {{"章三",20},{"李四",30},{"网为",10}};
	
	int sz=sizeof(s)/sizeof(s[0]);
	
	qsort(s,sz,sizeof(s[0]),cmp_by_name);//根据名字的长度来排序 
//		qsort(s,sz,sizeof(s[0]),cmp_by_age);   根据年龄排序 
	int j;
	for(j=0; j<sz; j++) {
		printf("%s\t%d\n",s[j].name,s[j].age);

	}
	}

	
int main() {
//	bubble(arr,sz);//此函数只能排整数型的arr
//	test1();
//	test2();
	test3();
	return 0;

}
