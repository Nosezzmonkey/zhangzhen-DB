#include<stdio.h>
#include <string.h>
#include<assert.h>

void * my_memcpy(void* dest,const void*src,size_t num) {
	void * ret=dest;
	assert(dest!=NULL);
	assert(src);

	while(num--) {
		*(char*)dest=*(char*)src;
		(char*)dest++;  //ʵ��Ӧ��Ϊ++��char*��dest �������ʹ�ûᱨ��
		(char*)src++;
	}
	
}

void *my_memmove(void *dest,const void * src,size_t count ) //���Կ�����ͬ�����е����ݣ�������Ҫ�ж��Ǵ�ǰ���󿽱������ǴӺ�ǰ���� 
{
	void * ret=dest;

	assert(dest);
	assert(src);
	if(dest<src) {
		//��ǰ��󿽱�

		while(count--) {
			*(char*)dest=*(char*)src;
			(char*)dest++;  //ʵ��Ӧ��Ϊ++��char*��dest �������ʹ�ûᱨ��
			(char*)src++;
		}
		return ret;
	} else {
		//�Ӻ���ǰ����
		while(count--)
		{
			*((char*)dest+count)=*((char*)src+count);//ʵ���˴Ӻ���ǰ���� 
			
		}


	}
	return ret;
}
//void * my_memmove(void* dest,const void*src,size_t num)
//{
//	int   arr4[]={ 0 } ;
//
//	my_memcpy(arr4,src,20);
//
//	return  my_memcpy(dest,arr4,num);
//	  �Լ�д��memove�����⣡��������������������������������������
//}
//memcpy ֻҪ�������ص����ڴ濽���Ϳ�����
//memmove  �����ص��ڴ�Ŀ���
int main() {
	int arr1[5]= {1,2,3,4,5};
	int arr2[5]= {0};
	int arr[10]= {1,2,3,4,5,6,7,8,9,10};
	int arr4[10]= {1,2,3,4,5,6,7,8,9,10};

//	memcpy(arr2,arr1,sizeof(arr1));//�κ����͵�����memcpy���ܿ��� ,ע����ϲ��������������������ݵ��ֽڵĴ�С
	my_memcpy(arr2,arr1,sizeof(arr1));

//	my_memmove(arr+2,arr,20);
	my_memcpy(arr,arr+2,20);
	int i=0;
	for(i; i<10; i++) {
		printf("%d\n",arr[i]);
	}

	return 0;
}
