#include<stdio.h>
//����ˮ����õ���ʼ���Ƕ�����һ
//20  39         100=199   180=359 
int main()
{
	int money=0;
	int total=0;
	int empty=0;
	scanf("%d",&money);
	total=money;//�Ѿ����˶�ʮƿ�� 
	empty=money;//�ж�ʮ����ƿ��
	//����������ˮ��ֻ�е���ƿ�������ڵ��ڶ���ʱ����ܻ�
	while(empty>=2)
	{
		total+=empty/2;
		empty=empty/2+empty%2;
	 } 
	printf("%d\n",total);
	return 0;
}
