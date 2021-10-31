#include"contact.h"
//初始化通讯录
void InitContact(struct Contact* ps) {

	memset(ps->data, 0, sizeof(ps->data));//通过此函数的所有数据都改为0，第三个参数是数组的总大学

}
//添加通讯录
void AddContact(struct Contact* ps) {
	if (ps->size == MAX) {
		printf("通讯录已满，添加失败！");
	
	
	}
	else
	{
		
		if (ps->data) {
			printf("请输入名字：");
			scanf_s("%s", ps->data[ps->size].name,128);//如果是数组的话就不用取地址的输入
			printf("请输入年龄：");
			scanf_s("%d", &(ps->data[ps->size].age));//如果是整形的输入就要取地址了 ！！！！！
			printf("请输入性别：");
			scanf_s("%s", ps->data[ps->size].sex, 128);
			printf("请输入电话：");
			scanf_s("%s", ps->data[ps->size].tele,128);
			printf("请输入地址：");
			scanf_s("%s", ps->data[ps->size].addr, 128);
			ps->size++;
			printf("添加成功\n");

		}
	}
	return;
}

void ShowContact(const struct Contact* ps)
{
	if (ps->size == 0) {
		printf("通讯录为空\n");
	}
	else
	{
		int i = 0;
		printf("%20s\t%4s\t%5s\t%12s\t%20s\n", "名字", "年龄", "性别", "电话", "住址");
		for (i = 0; i < ps->size; i++) {
			printf("%20s\t%4d\t%5s\t%12s\t%20s\n", ps->data[i].name, ps->data[i].age,
				ps->data[i].sex, ps->data[i].tele, ps->data[i].addr);
		}

	}

}
