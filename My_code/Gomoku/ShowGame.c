#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
void game()
{
	int x, y;
	char board[16][16];
	InitBoard(board);
	while (1)
	{
		DisplayBoard(board);
		ChessByPlayer(board);
		if (IsWin(board, '*'))
		{
			break;
		}
		DisplayBoard(board);
		printf("����˼����....\n");
		Sleep(3000);
		printf("����˼�����\n");
		Sleep(1000);
		ChessByComputer(board);
		if (IsWin(board, '#'))
		{
			break;
		}
	}
}
int main()
{
	int n;
	do
	{
		menu();
		scanf("%d", &n);
		game();
	} while (1);
}