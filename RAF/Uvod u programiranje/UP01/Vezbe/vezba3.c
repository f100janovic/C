#include <stdio.h>
#include <stdlib.h>
/*Napisati program koji za temperaturu unetu u 
Celzijusima ispisuje temperaturu u Kelvinima. 
TK = TC + 273.15 */

int main(){
	float TC;
	//unos temperature u Celzijusima
	scanf("%f", &TC);
	//ispisuje temperaturu u Kelvinima
	printf("%f", TC+273.15);

	return 0;
}