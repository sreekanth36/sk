#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int i, j, height = 20, width = 20;
int gameover, score;
int x, y, fruitx, fruity, flag;
void fruits()
{
	gameover = 0;

	x = height / 2;
	y = width / 2;
fruitsx:
	fruitx = rand() % 20;
	if (fruitx == 0)
		goto fruitsx;
fruitsy:
	fruity = rand() % 20;
	if (fruity == 0)
		goto fruitsy;
	score = 0;
}

void draw()
{
	system("cls");
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			if (i == 0 || i == width - 1 || j == 0 || j == height - 1)
			{
				printf("#");
			}
			else
			{
				if (i == x && j == y)
					printf("0");
				else if (i == fruitx
						&& j == fruity)
					printf("*");
				else
					printf(" ");
			}
		}
		printf("\n");
	}
	printf("score = %d", score);
	printf("\n");
	printf("press X to quit the game");
}

void input()
{
	if (kbhit())
	{
		switch (getch())
		{
			case 'f':
				flag = 1;
				break;
			case 'd':
				flag = 2;
				break;
			case 'j':
				flag = 3;
				break;
			case 'k':
				flag = 4;
				break;
			case 'x':
				gameover = 1;
				break;
		}
	}
}

void logic()
{
	sleep(1);
	switch (flag)
	{
		case 1:
			x++;
			break;
		case 2:
			y--;
			break;
		case 3:
			x--;
			break;
		case 4:
			y++;
			break;
		default:
			break;
	}
    if (x < 0 || x > height || y < 0 || y > width)
	    gameover = 1;
    if (x == fruitx && y == fruity)
    {
logicx:
	    fruitx = rand() % 20;
	    if (fruitx == 0)
		    goto logicx;

logicy:
	    fruity = rand() % 20;
	    if (fruity == 0)
		    goto logicy;
	    score += 5;
    }
}

void main()
{
	fruits();

	while (!gameover)
	{
		draw();
		input();
		logic();
	}
}
