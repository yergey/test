#define _CRT_SECURE_NO_WARNINGS 1


#include<stdio.h>
#include"game.h"

void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		//1.��ӡһ�е�����
		/*printf(" %c | %c | %c \n", board[i][0], board[i][1], board[i][2]);*/
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		//2.��ӡ�ָ���
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}

	}

}

void PlayMove(char board[ROW][COL], int row, int col)
{
	while (1)
	{
		int x, y;
		printf("��������Ҫ�µ����꣺>");
		scanf("%d%d", &x, &y);

		if (x >= row-1 || y >= col-1 || row < 0 || col-1 < 0)
		{
			printf("����Ƿ����꣬����������\n");
			continue;
		}
		else
		{
			if (board[x-1][y-1] != ' ')
			{
				printf("��λ�������ӣ�����ѡ��λ��\n");
				continue;
			}
			else
			{
				board[x-1][y-1] = 'M';
				break;
			}
		}
	}
}