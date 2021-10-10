#include"gobang.h"
 void InitBoard(){
 	int i=0;
 	for(i;i<BOARD_SIZE;i++)
 	{
 		int j=0;
 		for( j=0;j<BOARD_SIZE;j++)
 		{
 			ChessBoard[i][j]="ʮ";
 			
		 }
 		
	 }
 	
 	
 }
 void PrintBoard()
{
	int i=0;
 	for(i;i<BOARD_SIZE;i++)
 	{
 		int j=0;
 		for(j=0;j<BOARD_SIZE;j++)
 		{
			printf("%s",ChessBoard[i][j]); 			
		 }
 		printf("\n");
	 }
 	
}
