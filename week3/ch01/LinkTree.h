#pragma once
#include"ElementType.h"
//������������������
typedef struct treeNode {
	ElementType data;    //���ڵ��������
	struct treeNode* left;  //������
	struct treeNode* right;  //������
}TreeNode;
