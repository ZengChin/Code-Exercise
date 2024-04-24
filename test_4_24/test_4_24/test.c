#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<time.h>
void menu()
{
	printf("game 1\nexit 0\n");
}
void game()
{
	int guess = rand() % 100 + 1;
	int input = 0;
	while (1)
	{
		printf("please enter your guess number:\n");
		scanf("%d", &input);
		if (input > guess) {
			printf("you guess big\n");
		}
		else if (input < guess) {
			printf("you guess small\n");
		}
		else {
			printf("congratulate you guess the number\n");
			break;
		}

	}

}
int main()
{
	srand((unsigned int)time(NULL));
	int i = 0;
	do {
		menu();
		scanf("%d", &i);
		switch (i) {
		case 1:
			game();
			break;
		case 0:
			printf("welcome your next time!\n");
			break;
		default:
			printf("error number\n");
			break;
		}

	} while (i);
	return 0;
}