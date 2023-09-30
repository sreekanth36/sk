#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void displayBoard(char board[]) {
	printf(" %c | %c | %c \n", board[0], board[1], board[2]);
	printf("---+---+---\n");
	printf(" %c | %c | %c \n", board[3], board[4], board[5]);
	printf("---+---+---\n");
	printf(" %c | %c | %c \n", board[6], board[7], board[8]);
}

int checkWin(char board[], char symbol) {
	if ((board[0] == symbol && board[1] == symbol && board[2] == symbol) ||
			(board[3] == symbol && board[4] == symbol && board[5] == symbol) ||
			(board[6] == symbol && board[7] == symbol && board[8] == symbol) ||
			(board[0] == symbol && board[3] == symbol && board[6] == symbol) ||
			(board[1] == symbol && board[4] == symbol && board[7] == symbol) ||
			(board[2] == symbol && board[5] == symbol && board[8] == symbol) ||
			(board[0] == symbol && board[4] == symbol && board[8] == symbol) ||
			(board[2] == symbol && board[4] == symbol && board[6] == symbol)) {
		return 1;//  player wins
	} else {
	return 0;
}
}

int main() {
	char board[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
	int playerMove, computerMove;
	srand(time(NULL)); // seed the random number generator

		printf("Let's play Tic-Tac-Toe!\n");
	displayBoard(board);
while(1)
{
	do {
		printf("Enter your move (1-9): ");
		scanf("%d", &playerMove);
	} while (board[playerMove - 1] == 'X' || board[playerMove - 1] == 'O' || playerMove < 1 || playerMove > 9);

	board[playerMove - 1] = 'X'; // player move
		displayBoard(board);

	if (checkWin(board, 'X')) {
		printf("Congratulations! You win!\n");
		return 0;
	}

	printf("The computer is making its move...\n");

	do {
		computerMove = rand() % 9; // generate a random move
	} while (board[computerMove] == 'X' || board[computerMove] == 'O');

	board[computerMove] = 'O'; // computer move
		displayBoard(board);

	if (checkWin(board, 'O')) {
		printf("Sorry, you lose.\n");
		return 0;
	}
}
	printf("It's a tie!\n");
	return 0;
}

