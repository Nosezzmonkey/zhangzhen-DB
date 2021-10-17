#include<stdio.h>
#include<stdlib.h>
#include"SeqTree.h"
#include"BinaryTree.h"

void TestSeqTree();
void TestBinaryTree();
int main() {
//	TestSeqTree();
TestBinaryTree();
	
	
	return 0;
}

void TestSeqTree() {
	SeqTree tree;
	InitSeqTree(tree);
	printf("请输入根节点的 内容：");
	CreateSeqTree(tree,0);
	int i=0;
	for ( i = 0; i < 15; i++) {
		printf("%d,", tree[i]);
	}
	printf("\n");
		printf("总结点树：%d\n", GetSeqTreeRoot(tree));

	printf("总结点树：%d\n", GetSeqTreeLength(tree));
	printf("总深度树：%d\n", GetSeqTreeDepth(tree));
}

void TestBinaryTree(){
	BinaryTree tree;
	
	//容易遗漏的地方，根节点需要提前分配内存
	InitLinkTree(&tree);
		tree.root=(TreeNode*)malloc(sizeof(TreeNode)) ;
	printf("请输入根节点:");
//	CreateBinaryTree(tree.root);
CreateBinaryTree_Test(tree.root);
	printf("前序遍历的结果");
	preOrderTraverse(tree.root); 
	
	printf("\n\n中序遍历的结果：\n");
	InOrderTraverse(tree.root);
	printf("\n\n非递归中序遍历：\n");
	InOrderTraverse_Re(tree.root);
	
	free(tree.root);
	
}
