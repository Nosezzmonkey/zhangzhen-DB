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
	printf("��������ڵ�� ���ݣ�");
	CreateSeqTree(tree,0);
	int i=0;
	for ( i = 0; i < 15; i++) {
		printf("%d,", tree[i]);
	}
	printf("\n");
		printf("�ܽ������%d\n", GetSeqTreeRoot(tree));

	printf("�ܽ������%d\n", GetSeqTreeLength(tree));
	printf("���������%d\n", GetSeqTreeDepth(tree));
}

void TestBinaryTree(){
	BinaryTree tree;
	
	//������©�ĵط������ڵ���Ҫ��ǰ�����ڴ�
	InitLinkTree(&tree);
		tree.root=(TreeNode*)malloc(sizeof(TreeNode)) ;
	printf("��������ڵ�:");
//	CreateBinaryTree(tree.root);
CreateBinaryTree_Test(tree.root);
	printf("ǰ������Ľ��");
	preOrderTraverse(tree.root); 
	
	printf("\n\n��������Ľ����\n");
	InOrderTraverse(tree.root);
	printf("\n\n�ǵݹ����������\n");
	InOrderTraverse_Re(tree.root);
	
	free(tree.root);
	
}
