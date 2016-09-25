#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
Checks if number is Armstrong Number(abc = a^3 + b^3 + c^3)
*/
int main(){
	int number,a,b,c;
	number = 1000;
	printf("Enter a 3 digit number\nYou will be asked to enter a number until it has 3 digits\n");
	while (number > 999 || number < 100){
		scanf("%d",&number);
	}
	a = number / 100;
	b = (number / 10)-10*a;
	c = number - 100*a - 10*b;
	if (pow(a,3)+pow(b,3)+pow(c,3)==number){
		printf("The number is an Armstrong Number\n");
	}
	else{
		printf("The number is not an Armstrong Number\n");
	}
	return 0;
}