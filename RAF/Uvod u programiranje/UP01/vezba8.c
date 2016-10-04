#include <stdio.h>
#include <stdlib.h>
/* Napisati program koji ispisuje 
cifre unetog trocifrenog broja */

int main(){
	int a;
	//unos trocifrenog broja
	scanf("%d", &a);
	// a/100 je prva cifra, (a%100-a%10)/10 je druga, a%10 je treca
	printf("%d %d %d", a/100,(a%100-a%10)/10,a%10);

	return 0;
}