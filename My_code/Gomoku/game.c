#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
int m, n;
int bestX, bestY;
void menu()
{
	printf("******************\n");
	printf("****** 0.exit ****\n");
	printf("****** 1.play ****\n");
	printf("******************\n");
	printf("玩家：*    电脑：#\n");
}
void InitBoard(char board[16][16])
{
	for (int i = 1; i <= 15; i++)
	{
		for (int j = 1; j <= 15; j++)
		{
				board[i][j] = ' ';
		}
	}
}
void DisplayBoard(char board[16][16])
{
	printf(" 0| 1| 2| 3| 4| 5| 6| 7| 8| 9|10|11|12|13|14|15|\n");
	for (int i = 1; i < 16; i++)
	{
		printf("------------------------------------------------\n");
		if (i < 10)
			printf(" %d|", i);
		else
			printf("%d|", i);
		for (int j = 1; j < 16; j++)
		{
			printf(" %c|", board[i][j]);
		}
		printf("\n");
	}
}
void ChessByPlayer(char board[16][16])
{
	printf("请输入您想要选择布置的坐标:");
	while(1)
	{
		scanf("%d %d", &n, &m);
		if (m <= 0 || m > 15 || n <= 0 || n > 15)
			printf("您输入的坐标非法，请重新输入:\n");
		else if (board[m][n] != ' ')
			printf("此处已有棋子，请您重新输入：\n");
		else
		{
			board[m][n] = '*';
			break;
		}
	}
}

int evaluatePosition(char board[16][16], int x, int y, char player)
{
	if (x < 1 || x > 15 || y < 1 || y > 15)
		return 0;

	int score = 0;
	int count = 0;
	for (int i = y; i >= 1 && board[x][i] == player; i--)
		count++;
	for (int i = y + 1; i <= 15 && board[x][i] == player; i++)
		count++;
	score += count * count;

	count = 0;
	for (int i = x; i >= 1 && board[i][y] == player; i--)
		count++;
	for (int i = x + 1; i <= 15 && board[i][y] == player; i++)
		count++;
	score += count * count;

	count = 0;
	for (int i = x, j = y; i >= 1 && j >= 1 && board[i][j] == player; i--, j--)
		count++;
	for (int i = x + 1, j = y + 1; i <= 15 && j <= 15 && board[i][j] == player; i++, j++)
		count++;
	score += count * count;

	count = 0;
	for (int i = x, j = y; i >= 1 && j <= 15 && board[i][j] == player; i--, j++)
		count++;
	for (int i = x + 1, j = y - 1; i <= 15 && j >= 1 && board[i][j] == player; i++, j--)
		count++;
	score += count * count;

	return score;
}


void ChessByComputer(char board[16][16])
{
	int maxScore = 0;

	for (int i = 1; i <= 15; i++)
	{
		for (int j = 1; j <= 15; j++)
		{
			if (board[i][j] == ' ')
			{
				int computerScore = evaluatePosition(board, i, j, '#');
				int playerScore = evaluatePosition(board, i, j, '*');

				int score = computerScore * 2 + playerScore;
				if (score > maxScore)
				{
					maxScore = score;
					bestX = i;
					bestY = j;
				}
			}
		}
	}
	int flag = 1;
	if (bestX >= 1 && bestX <= 15 && bestY >= 1 && bestY <= 15)
	{
		board[bestX][bestY] = '#';
		printf("电脑落子坐标: (%d, %d)\n", bestY, bestX);
		flag = 0;
	}
	if (flag)
	{
		board[2][2] = '#';
		printf("电脑落子坐标: (2,2)\n");
	}
}
int IsWin(char board[16][16], char a)
{
	int checkX, checkY;
	if (a == '#') {
		checkX = bestX; // 使用电脑的最后落子坐标
		checkY = bestY;
	}
	else {
		checkX = m;     // 玩家的最后落子坐标
		checkY = n;
	}

	int max_count = 0;

	int count = 1;
	for (int i = checkY - 1; i >= 1 && board[checkX][i] == a; i--)
		count++;
	for (int i = checkY + 1; i <= 15 && board[checkX][i] == a; i++) 
		count++;
	max_count = (count > max_count) ? count : max_count;

	count = 1;
	for (int i = checkX - 1; i >= 1 && board[i][checkY] == a; i--) 
		count++;
	for (int i = checkX + 1; i <= 15 && board[i][checkY] == a; i++) 
		count++;
	max_count = (count > max_count) ? count : max_count;

	count = 1;
	for (int i = checkX - 1, j = checkY - 1; i >= 1 && j >= 1 && board[i][j] == a; i--, j--) 
		count++;
	for (int i = checkX + 1, j = checkY + 1; i <= 15 && j <= 15 && board[i][j] == a; i++, j++) 
		count++;
	max_count = (count > max_count) ? count : max_count;

	count = 1;
	for (int i = checkX - 1, j = checkY + 1; i >= 1 && j <= 15 && board[i][j] == a; i--, j++) 
		count++;
	for (int i = checkX + 1, j = checkY - 1; i <= 15 && j >= 1 && board[i][j] == a; i++, j--) 
		count++;
	max_count = (count > max_count) ? count : max_count;

	if (max_count >= 5) {
		DisplayBoard(board);
		if (a == '*') 
		{
			printf("恭喜你，你赢了\n");
		}
		else 
		{
			printf("很遗憾，你输了\n");
		}
		return 1;
	}
	return 0;
}