#include<stdio.h>
//喝汽水问题得到的始终是二倍减一
//20  39         100=199   180=359 
int main()
{
	int money=0;
	int total=0;
	int empty=0;
	scanf("%d",&money);
	total=money;//已经喝了二十瓶了 
	empty=money;//有二十个空瓶了
	//换回来的汽水，只有当空瓶数量大于等于二的时候才能换
	while(empty>=2)
	{
		total+=empty/2;
		empty=empty/2+empty%2;
	 } 
	printf("%d\n",total);
	return 0;
}
