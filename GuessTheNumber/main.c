#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
Guess the number game, where you have to
guess the random number from 1 to 10 given 
by the program, and if you guess it wrong 
then the program will let you try again and 
tell you if the correct number is higher or 
lower than the  one you typed in. When you 
do guess the number it will tell you the 
number of tries and congratulateyou on 
sguessing it.
*/

int main()
{
	int number,numOfTries,try;

	srand(time(NULL));
	number = rand()%(10-1 + 1)+1;
	try = 0;
	numOfTries = 1;
	while (try!=number){
		scanf("%d", &try);
		if (try == number){
			printf("Correct! It took you %d tries.\n", numOfTries);
		}
		else if (try < number){
			printf("Higher\n");
			numOfTries++;
		}
		else if (try > number){
			printf("Lower\n");
			numOfTries++;
		}
	}

	return 0;
}