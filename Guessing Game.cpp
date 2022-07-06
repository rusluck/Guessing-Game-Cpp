#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
	printf("Guessing Game because you are bored! In C++!\n\n");
	printf("Guess a number between 0 and 30,000!\n\n");
	printf("ONLY INPUT NUMBERS OR THE GAME WILL FREAK Out\n");
	printf("In case you do, press ctrl c to stop the game.\n\n\n");

	printf("Hint: It will mostly generate around 20000\n\n");
	srand((unsigned int)time(NULL));
	int secretNumber = rand();
	while (true)
	{
		try
		{
			int guess;
			printf("Please input a number.\n");
			scanf_s("%i", &guess);
			printf("Your number is: %i\n", guess);
			if (guess < secretNumber)
			{
				printf("Too Small!\n");

			}
			else if (guess > secretNumber)
			{
				printf("Too Big!\n");
			}
			else
			{
				int playAgain;

				printf("You win! ");
				printf("Do you want to play again?[1]\n");
				scanf("%d", &playAgain);
				if (playAgain)
				{
					secretNumber = rand();
					continue;
				}
				else
				{
					printf("Thanks for playing!");
					break;
				}
			}
		}
		catch(...)
		{
			continue;
		}
	}
}