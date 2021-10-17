#include"LinkTree.h"
#include"LinkStack.h"
#include<string.h>

//����һ�����εĽṹ

typedef struct {
	TreeNode* root;//�������ĸ��ڵ�
	int length;   //�����ܸ���
	int depth;		//���
	int diameter;  //��Ҷ�ڵ㵽Ҷ�ڵ���·����ĳЩ���Ի��漰��

}BinaryTree;
//��ʼ��һ������
void InitLinkTree(BinaryTree* tree);
//������������ⲿ��Ҫ���ȶԽ������ڴ棬����ֵ��0���򲻼���������1�Ļ������ɹ�
int  CreateBinaryTree(TreeNode* root);

//ǰ����� ���ȸ��ڵ㣬������
void preOrderTraverse(TreeNode* node);

int  CreateBinaryTree_Test(TreeNode* root) ;

//����������и���������������   ��  ��  ��

void InOrderTraverse(TreeNode* node);


//�ǵݹ鷽ʽ���������
void InOrderTraverse_Re(TreeNode* node); 

//��������,Ҳ��������������������Ρ� ��--��--��
void PostOrderTraverse(TreeNode* node);


