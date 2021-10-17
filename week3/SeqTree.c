#include"SeqTree.h"
void  InitSeqTree(SeqTree tree) {
	//���ַ������е�ÿ��Ԫ�ض�����Ϊ��
	int i=0;
	for ( i = 0; i < MAX_SIZE; i++) {
		tree[i] = '\0';

	}
}

/*���������� ,i Ϊ�����е��±�*/
void CreateSeqTree(SeqTree tree, int i) {
	char ch;
	ch = getchar();//�Ӽ��̶����ַ�
	fflush(stdin);//��׼������ ��ջ�������Ȼ��Ϳ���Ҫ�ٳ�������
	if (ch == '^') {//����˷��ű�ʾ������ǰ��������
		tree[i] = '\0';
		return;
	}
	tree[i] = ch;
	//ĳ�����������Ϻ󣬻���Ҫ���û��������Ӻ��Һ���
	printf("��ߺ��ӽ�㣺");
	CreateSeqTree(tree, 2 * i + 1);//�ݹ����
	printf("�ұߵĺ��ӽ�㣺");
	CreateSeqTree(tree, 2 * (i + 1));

}

/*  ��ȡ���ĸ��ڵ�Ԫ��*/
int  GetSeqTreeRoot(SeqTree tree) {

	return tree[0];
}
/*  ��ȡ������ɶ������Ľڵ�����*/
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

/*  ��ȡ����ȫ�������Ľڵ�����*/
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
/*  ��ȡ��ȫ����������ȣ����ΪK�Ķ����������2^K-1�����*/
int  GetSeqTreeDepth(SeqTree tree) {
	int depth = 0;
	int len = GetSeqTreeLength(tree);
	while ((int)pow(2, depth) - 1 < len) {
		depth++;

	}
	return depth;
}
