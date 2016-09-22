#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
Checks if a number is torn.A number n is a 
torn number if it can be chopped into two
parts which, when added together and squared,
are equal to the original number.
*/

int main(){
	int i,p,n,m;
	printf("Enter a 4-digit number you wish to check\n");
	scanf("%d", &i);
	p=i/100;
	n=i%100;
	m=p+n;
	if (pow(m,2) == i){
		printf("The number is torn\n");
	}
	else{
		printf("The number isn't torn\n");
	}
	return 0;
}