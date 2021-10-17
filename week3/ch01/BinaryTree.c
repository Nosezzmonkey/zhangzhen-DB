#include"BinaryTree.h"

static int id=0;

//��ʼ���յĶ�����
void InitLinkTree(BinaryTree* tree) {
	tree->root = NULL;
	tree->depth = 0;
	tree->diameter = 0;
	tree->length = 0;

}

//������������ⲿ��Ҫ���ȶԽ������ڴ�
int  CreateBinaryTree(TreeNode* root) {
	//���жϸ�����Ƿ�Ϊ�գ��յĻ����˳�����  
	//ϵͳ�Զ��á�\0�����滻�з���Ϊ�ַ����Ľ�����־ ==> �����ж��Ƿ��ַ�����βҪ�á�\0��
	if (! root) return 0;
	char inputName[NAME_SIZE];
	gets(inputName);
	//�û�����س���ʾ������ǰ�����Ĵ���
	if (strcmp(inputName, "\0") == 0) return 0;
	root->data.id = ++id;
	strcpy(root->data.name, inputName);
	//Ϊ�������ҽ����׼�� ��λ���ҽ��ָ������ڴ�
	root->left = (TreeNode*)malloc(sizeof(TreeNode));
	root->right = (TreeNode*)malloc(sizeof(TreeNode));
	printf("��ڵ㣺"); 
	if (CreateBinaryTree(root->left) == 0) {
		free(root->left);
		root->left = NULL;
	}
		printf("�ҽڵ㣺"); 

	if (CreateBinaryTree(root->right) == 0) {
		free(root->right);
		root->right = NULL;
	}

	
	
	
	return 1;

}



 
void preOrderTraverse(TreeNode* node) {
	//�ȷ��ʸ��ڵ㣬Ȼ�������������������������
	if (node)//���ж��Ƿ�Ϊ��
	{
		printf("[%d ,%s]  ", node->data.id, node->data.name);
		preOrderTraverse(node->left);
		preOrderTraverse(node->right);

	}


}

/*ģ���û������˳��*/
char* nodeNames[] = { "Aads","Basd","Dds","#","#","Eqeqw","#","#","Cqe","Fsad","#","#","Gasd","#","#" };
static int nodeNameIndex = 0;

//���԰�Ĵ�������
int  CreateBinaryTree_Test(TreeNode* root) {
	//���жϸ�����Ƿ�Ϊ�գ��յĻ����˳�����  
	//ϵͳ�Զ��á�\0�����滻�з���Ϊ�ַ����Ľ�����־ ==> �����ж��Ƿ��ַ�����βҪ�á�\0��
	if (!root) return 0;
	char inputName[NAME_SIZE];
	//gets_s(inputName);
	strcpy(inputName, nodeNames[nodeNameIndex++]);
	//�û�����س���ʾ������ǰ�����Ĵ���
	if (strcmp(inputName, "#") == 0) return 0;
	root->data.id = ++id;
	strcpy(root->data.name, inputName);
	//δ�������ҽ����׼�� ��λ���ҽ��ָ������ڴ�
	root->left = (TreeNode*)malloc(sizeof(TreeNode));
	root->right = (TreeNode*)malloc(sizeof(TreeNode));
	if (CreateBinaryTree_Test(root->left) == 0) {
		free(root->left);
		root->left = NULL;
	}
	if (CreateBinaryTree_Test(root->right) == 0) {
		free(root->right);
		root->right = NULL;
	}




	return 1;

}

//����������и���������������   ��  ��  ��

void InOrderTraverse(TreeNode* node) {
	if (node) {
		InOrderTraverse(node->left);
		printf("[%d ,%s]", node->data.id, node->data.name);
		InOrderTraverse(node->right);

	}
}


//�ǵݹ鷽ʽ���������

void InOrderTraverse_Re(TreeNode* node)
{
	//�������������˳�򣬶����������������ȷ������ӣ��������ֿ��Կ���һ�������
	//Ȼ�������������Ϊ�յĽ�㣬������ͬ�Ĺ������������
	LinkStack linkStack;
	InitLinkStack(&linkStack);
	TreeNode* root = node;
	//currNode��������ÿ����ջ����ָ��
	TreeNode* currNode = (TreeNode*)malloc(sizeof(TreeNode));
	//����Ҫһ����ʱָ�룬����ȷ�������ͷŵ����������ڴ�
	TreeNode* tmpNode = currNode;
	while (root ||! IsLinkStackEmpty(&linkStack)) {
		if (root) {
			Push(&linkStack, root);
			root = root->left;
		}
		else {

			//�ѵ� ��ӦΪ��ջ�ĵڶ�������Ϊ����ָ�룬����Ҫ����ָ��ĵ�ַ
			Pop(&linkStack, &currNode);
			printf("[%d ,%s]", currNode->data.id, currNode->data.name);
			root = currNode->right;
		}


	}
	free(tmpNode);

}


//��������,Ҳ��������������������Ρ� ��--��--��
void PostOrderTraverse(TreeNode* node) {
	if (node) {
		PostOrderTraverse(node->left);
		PostOrderTraverse(node->right);
		printf("[%d ,%s]", node->data.id, node->data.name);
		
	}


}



