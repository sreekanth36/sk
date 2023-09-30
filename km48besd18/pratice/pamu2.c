#include <stdio.h>
#include <stdlib.h>
#include <ncurses.h>

#define WIDTH 20
#define HEIGHT 20

enum Direction {
	    UP, DOWN, LEFT, RIGHT
};

struct Node {
	    int x;
	        int y;
		    struct Node* next;
};
void setup();
void draw();
void input();
void logic();
void gameOver();
int gameover;
enum Direction dir;
struct Node* head;
struct Node* tail;
int fruitX, fruitY;
int score;

int main() {
	setup();

	while (!gameover) {
		draw();
		input();
		logic();
		usleep(100000);

		    }

	    gameOver();

	        return 0;
}

void setup() {
	    initscr();  clear();
	        noecho();
		cbreak(); 

		curs_set(0); 
		keypad(stdscr, TRUE);
		nodelay(stdscr, TRUE);
		gameover = 0;
		dir = RIGHT;
		head = (struct Node*)malloc(sizeof(struct Node));
		head->x = WIDTH / 2;
		head->y = HEIGHT / 2;
		head->next = NULL;
		tail = head;
		fruitX = rand() % WIDTH;
		fruitY = rand() % HEIGHT;
		score = 0;
}

void draw() {
	clear();

	for (int i = 0; i < WIDTH + 2; i++)
		printw("#");
	printw("\n");

	for (int i = 0; i < HEIGHT; i++) {
		for (int j = 0; j < WIDTH; j++) {
			if (j == 0)
				printw("#"); 

			if (i == head->y && j == head->x)
				printw("O");
			else if (i == fruitY && j == fruitX)
				printw("F");

			else {
				int flag = 0;
				struct Node* cur = head->next;
				while (cur != NULL) {
					if (cur->x == j && cur->y == i) {
						printw("o"); 

						flag = 1;
						break;
					}
					cur = cur->next;
				}
				if (flag == 0)
					printw(" ");
			}
			if (j == WIDTH - 1)
				printw("#");
		}
		printw("\n");
	}
	for (int i = 0; i < WIDTH + 2; i++)
		printf("#");
	printf("\n");

	printf("Score: %d\n", score);    
}
