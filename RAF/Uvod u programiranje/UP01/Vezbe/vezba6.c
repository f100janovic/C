#include <stdio.h>
#include <stdlib.h>
/* Korisnik unosi slovo i broj k. Ispisati slovo
 koje se nalazi k mesta nakon unetog slova. */

int main(){
	char a;
	int k;
	//unos karaktera a
	scanf("%c", &a);
	//unos broja k
	scanf("%d", &k);
	//ispisuje slovo k mesta od a
	printf("Slovo %d mesta udaljeno od %c je %c\n", k, a,a+k);
	
	return 0;
}