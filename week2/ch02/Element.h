#define MAX 255
#define TRUE 1
#define FALSE 0

typedef struct{
	int  id;
	const char *name;
}ElementType;
typedef struct{
	int x;//当前棋子的x，y坐标 
	int y;
	int type;// 棋子的类型（white、black） 
}ChessMan;
