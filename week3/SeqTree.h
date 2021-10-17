#pragma once
// 树的 顺序存储结构 --一般只用于完全二叉树，这样可以避免内存浪费
#include<stdio.h>
#include<stdlib.h>
#include<math.h>


#define MAX_SIZE 1024
/*  定义顺序树 类型*/
typedef char SeqTree[MAX_SIZE];
//初始化空的二叉树
void  InitSeqTree(SeqTree tree);

/*创建二叉树 ,i 为数组中的下标*/
void CreateSeqTree(SeqTree tree, int i);

/*  获取树的根节点元素*/
int GetSeqTreeRoot(SeqTree tree);
/*  获取树的节点总数*/
int  GetSeqTreeLength(SeqTree tree);
/*  获取树的深度*/
int GetSeqTreeDepth(SeqTree tree);
