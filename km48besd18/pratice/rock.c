#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

	int playerChoice, computerChoice;
	srand(time(NULL)); // seed the random number generator
while(1)
{
		printf("Let's play Rock-Paper-Scissors!\n");
	printf("1 = Rock, 2 = Paper, 3 = Scissors, 6 = Exit\n");

	do {
		printf("Enter your choice (1-3): ");
		scanf("%d", &playerChoice);
		if(playerChoice==6)
			return 0;
	} while (playerChoice < 1 || playerChoice > 3);

	computerChoice = rand() % 3 + 1;//  generate a random number between 1 and 3

		printf("You chose ");

	switch (playerChoice) {
		case 1:
			printf("Rock.\n");
			break;
		case 2:
			printf("Paper.\n");
			break;
		case 3:
			printf("Scissors.\n");
			break;
	}

	printf("The computer chose ");

	switch (computerChoice) {
		case 1:
			printf("Rock.\n");
			break;
		case 2:
			printf("Paper.\n");
			break;
		case 3:
			printf("Scissors.\n");
			break;
	}

	if (playerChoice == computerChoice) {
		printf("It's a tie!\n");
	} else if (playerChoice == 1 && computerChoice == 3 || playerChoice == 2 && computerChoice == 1 || playerChoice == 3 && computerChoice == 2) {
		printf("Congratulations! You win!\n");
	} else {
		printf("Sorry, you lose.\n");
	}
}
	return 0;
}

