#define MAX 255
#define TRUE 1
#define FALSE 0

typedef struct{
	int  id;
	const char *name;
}ElementType;
typedef struct{
	int x;//��ǰ���ӵ�x��y���� 
	int y;
	int type;// ���ӵ����ͣ�white��black�� 
}ChessMan;
