#include"BinaryTree.h"

static int id=0;

//初始化空的二插树
void InitLinkTree(BinaryTree* tree) {
	tree->root = NULL;
	tree->depth = 0;
	tree->diameter = 0;
	tree->length = 0;

}

//构造二叉树，外部需要事先对结点分配内存
int  CreateBinaryTree(TreeNode* root) {
	//先判断根结点是否为空，空的话就退出创建  
	//系统自动用’\0’代替换行符作为字符串的结束标志 ==> 所以判断是否到字符串结尾要用’\0’
	if (! root) return 0;
	char inputName[NAME_SIZE];
	gets(inputName);
	//用户输入回车表示结束当前子树的创建
	if (strcmp(inputName, "\0") == 0) return 0;
	root->data.id = ++id;
	strcpy(root->data.name, inputName);
	//为输入左右结点做准备 ，位左右结点指针分配内存
	root->left = (TreeNode*)malloc(sizeof(TreeNode));
	root->right = (TreeNode*)malloc(sizeof(TreeNode));
	printf("左节点："); 
	if (CreateBinaryTree(root->left) == 0) {
		free(root->left);
		root->left = NULL;
	}
		printf("右节点："); 

	if (CreateBinaryTree(root->right) == 0) {
		free(root->right);
		root->right = NULL;
	}

	
	
	
	return 1;

}



 
void preOrderTraverse(TreeNode* node) {
	//先访问根节点，然后遍历左子树，最后遍历右子树
	if (node)//先判断是否为空
	{
		printf("[%d ,%s]  ", node->data.id, node->data.name);
		preOrderTraverse(node->left);
		preOrderTraverse(node->right);

	}


}

/*模仿用户输入的顺序*/
char* nodeNames[] = { "Aads","Basd","Dds","#","#","Eqeqw","#","#","Cqe","Fsad","#","#","Gasd","#","#" };
static int nodeNameIndex = 0;

//测试版的创建函数
int  CreateBinaryTree_Test(TreeNode* root) {
	//先判断根结点是否为空，空的话就退出创建  
	//系统自动用’\0’代替换行符作为字符串的结束标志 ==> 所以判断是否到字符串结尾要用’\0’
	if (!root) return 0;
	char inputName[NAME_SIZE];
	//gets_s(inputName);
	strcpy(inputName, nodeNames[nodeNameIndex++]);
	//用户输入回车表示结束当前子树的创建
	if (strcmp(inputName, "#") == 0) return 0;
	root->data.id = ++id;
	strcpy(root->data.name, inputName);
	//未输入左右结点做准备 ，位左右结点指针分配内存
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

//中序遍历，中根遍历，中序周游   左  根  右

void InOrderTraverse(TreeNode* node) {
	if (node) {
		InOrderTraverse(node->left);
		printf("[%d ,%s]", node->data.id, node->data.name);
		InOrderTraverse(node->right);

	}
}


//非递归方式的中序遍历

void InOrderTraverse_Re(TreeNode* node)
{
	//根据中序遍历的顺序，对任意结点来讲，优先访问左孩子，而左孩子又可以看做一个根结点
	//然后继续访问左孩子为空的结点，按照相同的规则访问右子树
	LinkStack linkStack;
	InitLinkStack(&linkStack);
	TreeNode* root = node;
	//currNode用来保存每个出栈结点的指针
	TreeNode* currNode = (TreeNode*)malloc(sizeof(TreeNode));
	//还需要一个临时指针，用来确保后来释放掉上面分配的内存
	TreeNode* tmpNode = currNode;
	while (root ||! IsLinkStackEmpty(&linkStack)) {
		if (root) {
			Push(&linkStack, root);
			root = root->left;
		}
		else {

			//难点 ，应为出栈的第二个参数为二级指针，所以要传入指针的地址
			Pop(&linkStack, &currNode);
			printf("[%d ,%s]", currNode->data.id, currNode->data.name);
			root = currNode->right;
		}


	}
	free(tmpNode);

}


//后续遍历,也叫做后根遍历，后序周游。 左--右--根
void PostOrderTraverse(TreeNode* node) {
	if (node) {
		PostOrderTraverse(node->left);
		PostOrderTraverse(node->right);
		printf("[%d ,%s]", node->data.id, node->data.name);
		
	}


}



