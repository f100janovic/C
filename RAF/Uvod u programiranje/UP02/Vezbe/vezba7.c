#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*Korisnik treba da pogodi broj koji je kompjuter slučajno izvukao. 
Mogući brojevi su 1, 2 ili 3*/
int main(){
	int i,t,n;
	//definisanje random broja izmedju 1 i 3
	srand(time(0));
	i=rand()%(3+1-1)+1;
	//pocetne vrednost, t je pokusaj, n je broj pokusaja
	t=0;
	n=0;
	printf("Unesite pokusaj\n");
	//dokle god je pokusaj razlicit od random broja trazi da se unese novi broj
	while(t!=i){
		//unos pokusaja
		scanf("%d",&t);
		//ako je razlicit od i ispisuje poruku
		if (t!=i) printf("Pokusajte opet\n");
		//povecava brojac za 1
		n++;
		
	}
	//kad pogodite ispisuje poruku i broj pokusaja
	printf("Tacan Broj! Broj pokusaja: %d\n",n);
	return 0;
}