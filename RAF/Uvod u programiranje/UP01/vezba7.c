#include <stdio.h>
#include <stdlib.h>
/* Napisati program koji vremenski interval
 dat u minutima prikazuje u satima i minutima.*/

int main(){
	int m;
	//unos broja minuta
	scanf("%d", &m);
	printf("%d minuta je %d sati i %d minuta\n", m, m/60, m%60);

	return 0;
}