#include<stdio.h>
#include <string.h>
#include<assert.h>

void * my_memcpy(void* dest,const void*src,size_t num) {
	void * ret=dest;
	assert(dest!=NULL);
	assert(src);

	while(num--) {
		*(char*)dest=*(char*)src;
		(char*)dest++;  //实践应该为++（char*）dest ，但如此使用会报错
		(char*)src++;
	}
	
}

void *my_memmove(void *dest,const void * src,size_t count ) //可以拷贝相同数组中的内容，并且需要判断是从前到后拷贝，还是从后到前拷贝 
{
	void * ret=dest;

	assert(dest);
	assert(src);
	if(dest<src) {
		//从前向后拷贝

		while(count--) {
			*(char*)dest=*(char*)src;
			(char*)dest++;  //实践应该为++（char*）dest ，但如此使用会报错
			(char*)src++;
		}
		return ret;
	} else {
		//从后向前拷贝
		while(count--)
		{
			*((char*)dest+count)=*((char*)src+count);//实现了从后向前拷贝 
			
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
//	  自己写的memove有问题！！！！！！！！！！！！！！！！！！！！
//}
//memcpy 只要处理，不重叠的内存拷贝就可以了
//memmove  处理重叠内存的拷贝
int main() {
	int arr1[5]= {1,2,3,4,5};
	int arr2[5]= {0};
	int arr[10]= {1,2,3,4,5,6,7,8,9,10};
	int arr4[10]= {1,2,3,4,5,6,7,8,9,10};

//	memcpy(arr2,arr1,sizeof(arr1));//任何类型的数据memcpy都能拷贝 ,注意第上参数是你用来拷贝的数据的字节的大小
	my_memcpy(arr2,arr1,sizeof(arr1));

//	my_memmove(arr+2,arr,20);
	my_memcpy(arr,arr+2,20);
	int i=0;
	for(i; i<10; i++) {
		printf("%d\n",arr[i]);
	}

	return 0;
}
