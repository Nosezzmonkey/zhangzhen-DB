#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"stu.h" 
//int main()
//{
//	int *arr[10];//ָ������
//	//ָ�������ָ��   ����ָ��
//	int *	(*pa)[10]=&arr;
//	//����ָ��
//	int (*padd)(int ,int)=Add;//&add
//	(*padd)(1,2);
//	padd(1,2);
//	(**padd)(1,2);
//	//����ָ�������
//	int (*parr[5])(int ,int ) ;
//	//ָ����ָ�������ָ��
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

	//void*  ���͵�ָ����Դ���κ����͵�ָ��
	//���ǲ��ܽ�����
	// ��Ҫǿ������ת��
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
 return ( (int)(*(float *)e1-*(float*)e2)); //Ҫ�ѽ��ǿ��ת��Ϊ���Σ��ϱ�Ϊ��һ�ַ��� 
}			
int cmp_by_age(const void* e1,const void *e2)
{
	return 	((struct Stu*)e1)->age -((struct Stu*)e2)->age; 
}
int cmp_by_name(const void* e1,const void *e2){
	
	return  strcmp(((struct Stu*)e1)->name ,((struct Stu*)e2)->name);//�ַ����ȽϺ���������ֵ��Ȼ 1��2 ���ء�0 1��2 ���� ��0 
//	return  	((struct Stu*)e1)->name -((struct Stu*)e2)->name; //�ַ�������ֱ�������Ƚϣ�Ӧ����strcmp�Ƚ��ַ����Ĵ�С 
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
	struct Stu	s[3]= {{"����",20},{"����",30},{"��Ϊ",10}};
	
	int sz=sizeof(s)/sizeof(s[0]);
	
	qsort(s,sz,sizeof(s[0]),cmp_by_name);//�������ֵĳ��������� 
//		qsort(s,sz,sizeof(s[0]),cmp_by_age);   ������������ 
	int j;
	for(j=0; j<sz; j++) {
		printf("%s\t%d\n",s[j].name,s[j].age);

	}
	}

	
int main() {
//	bubble(arr,sz);//�˺���ֻ���������͵�arr
//	test1();
//	test2();
	test3();
	return 0;

}
