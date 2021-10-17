#pragma once
#include"ElementType.h"
//创建树结点来存放数据
typedef struct treeNode {
	ElementType data;    //树节点的数据域
	struct treeNode* left;  //左子树
	struct treeNode* right;  //右子树
}TreeNode;
