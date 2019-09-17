#include <stdio.h>
#include <stdlib.h>

#define rows 3
#define cols 3

int board[rows][cols];

void printScreen()
{
	system("cls");
	int i, j;
	for(i = 0;i < rows;i++)
	{
		for(j = 0;j < cols;j++)
		{
			printf("|%c", board[i][j]);
		}
		printf("|\n");
	}
}

int hasWon()
{
	int i = 0, j = 0;
	while(i < 3)
	{
		if(board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
			return 1;
		else
			i++;
	}
	while(j < 3)
	{
		if(board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[j][0] != ' ')
			return 1;
		else
			j++;
	}
	if(board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
		return 1;
	if(board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[2][0] != ' ')
		return 1;

	return 0;
} 
int main()
{
	int x, y, i, j;
	int p1 = 0, p2 = 0;
	for(i = 0;i < rows;i++)
	{
		for(j = 0;j < cols;j++)
			board[i][j] = ' ';
	}
	printScreen();
	printf("Welcome to the simple TicTacToe game\n");
	while(p1 == 0 && p2 == 0)
	{
		printf("Player 1 enter the coordinates of the square you want to put the cross\n");
		int valid = 0;
		while(valid == 0)
		{
			scanf("%d %d", &x, &y);
			if(board[x-1][y-1] == ' ' && 0 < x && x < 4 && 0 < y && y < 4)
			{	
				board[x-1][y-1] = 'X';
				valid = 1;
			}
			else
				printf("The square is invalid enter valid coordinates\n");
		}
		printScreen();
		p1 = hasWon();
		printf("Player 2 enter the coordinates of the square you want to put the circle\n");
		valid = 0;
		while(valid == 0)
		{
			scanf("%d %d", &x, &y);
			if(board[x-1][y-1] == ' ' && 0 < x && x < 4 && 0 < y && y < 4)
			{	
				board[x-1][y-1] = 'O';
				valid = 1;
			}
			else
				printf("The square is invalid enter valid coordinates\n", board[x][y], x, y);
		}
		printScreen();
		p2 = hasWon();
	}

	if(p1 == 1)
		printf("Congratulations Player 1 has won.\n");
	else
		printf("Congratulations Player 2 has won.\n");

	printf("Thanks for playing the game\n");
	printf("Press Y to play again or press any other key to exit:\n");
	char ch;
	fflush(stdin);
	scanf("%c", &ch);
	if(ch == 'Y' || ch == 'y')
		main();
	else
		exit(0);
	return 0;
}