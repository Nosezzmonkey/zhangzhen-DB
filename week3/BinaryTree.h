#include"LinkTree.h"
#include"LinkStack.h"
#include<string.h>

//创建一个树形的结构

typedef struct {
	TreeNode* root;//二叉链的根节点
	int length;   //结点的总个数
	int depth;		//深度
	int diameter;  //从叶节点到叶节点的最长路径（某些考试会涉及）

}BinaryTree;
//初始化一个空树
void InitLinkTree(BinaryTree* tree);
//构造二叉树，外部需要事先对结点分配内存，返回值是0，则不继续创建，1的话创建成功
int  CreateBinaryTree(TreeNode* root);

//前序遍历 ，先根节点，再左右
void preOrderTraverse(TreeNode* node);

int  CreateBinaryTree_Test(TreeNode* root) ;

//中序遍历，中根遍历，中序周游   左  根  右

void InOrderTraverse(TreeNode* node);


//非递归方式的中序遍历
void InOrderTraverse_Re(TreeNode* node); 

//后续遍历,也叫做后根遍历，后序周游。 左--右--根
void PostOrderTraverse(TreeNode* node);


