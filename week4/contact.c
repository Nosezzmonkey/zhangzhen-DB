#include"contact.h"
//��ʼ��ͨѶ¼
void InitContact(struct Contact* ps) {

	memset(ps->data, 0, sizeof(ps->data));//ͨ���˺������������ݶ���Ϊ0��������������������ܴ�ѧ

}
//���ͨѶ¼
void AddContact(struct Contact* ps) {
	if (ps->size == MAX) {
		printf("ͨѶ¼���������ʧ�ܣ�");
	
	
	}
	else
	{
		
		if (ps->data) {
			printf("���������֣�");
			scanf_s("%s", ps->data[ps->size].name,128);//���������Ļ��Ͳ���ȡ��ַ������
			printf("���������䣺");
			scanf_s("%d", &(ps->data[ps->size].age));//��������ε������Ҫȡ��ַ�� ����������
			printf("�������Ա�");
			scanf_s("%s", ps->data[ps->size].sex, 128);
			printf("������绰��");
			scanf_s("%s", ps->data[ps->size].tele,128);
			printf("�������ַ��");
			scanf_s("%s", ps->data[ps->size].addr, 128);
			ps->size++;
			printf("��ӳɹ�\n");

		}
	}
	return;
}

void ShowContact(const struct Contact* ps)
{
	if (ps->size == 0) {
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		int i = 0;
		printf("%20s\t%4s\t%5s\t%12s\t%20s\n", "����", "����", "�Ա�", "�绰", "סַ");
		for (i = 0; i < ps->size; i++) {
			printf("%20s\t%4d\t%5s\t%12s\t%20s\n", ps->data[i].name, ps->data[i].age,
				ps->data[i].sex, ps->data[i].tele, ps->data[i].addr);
		}

	}

}
