#include"SeqTree.h"
void  InitSeqTree(SeqTree tree) {
	//将字符数组中的每个元素都设置为空
	int i=0;
	for ( i = 0; i < MAX_SIZE; i++) {
		tree[i] = '\0';

	}
}

/*创建二叉树 ,i 为数组中的下标*/
void CreateSeqTree(SeqTree tree, int i) {
	char ch;
	ch = getchar();//从键盘读入字符
	fflush(stdin);//标准输入流 清空缓冲区，然后就可以要再出输入了
	if (ch == '^') {//输入此符号表示结束当前结点的输入
		tree[i] = '\0';
		return;
	}
	tree[i] = ch;
	//某个结点输入完毕后，还需要让用户输入左孩子和右孩子
	printf("左边孩子结点：");
	CreateSeqTree(tree, 2 * i + 1);//递归调用
	printf("右边的孩子结点：");
	CreateSeqTree(tree, 2 * (i + 1));

}

/*  获取树的根节点元素*/
int  GetSeqTreeRoot(SeqTree tree) {

	return tree[0];
}
/*  获取不是完成二插树的节点总数*/
int GetSeqTreeLength(SeqTree tree) {
	int length = 0;
	int i = 0;
	for (i; i < MAX_SIZE; i++) {
		if (tree[i] == '\0') {
			continue;

		}
		length++;
	}
	return length;

}

/*  获取是完全二叉树的节点总数*/
int Getlen(SeqTree tree)
{
		int len;
	
	for(len=MAX_SIZE;len>=1;len--){
		if(tree[len-1]!='\0')
		{
			break;
		}
		return len;
	}
}
/*  获取完全二叉树的深度，深度为K的二叉树最多右2^K-1个结点*/
int  GetSeqTreeDepth(SeqTree tree) {
	int depth = 0;
	int len = GetSeqTreeLength(tree);
	while ((int)pow(2, depth) - 1 < len) {
		depth++;

	}
	return depth;
}
