#include <stdio.h>
#include <stdlib.h>
//time se unosi da bi moglo da se koristi time(0) u srand funkciji
#include <time.h>
//Zadatak:Ispisuje random broj iz datog intervala(m,n) koji je deljiv sa k
int main()
{
	int m,n,k,x,y;
	//srand(time(0)) je da bi broj stvarno bio nasumice
	srand(time(0));
	/*unos ovim redom, pocetna vrednost intervala, 
	krajnja vrednost intervala, broj kojim treba rezultat da bude deljiv*/
	scanf("%d %d %d",&m,&n,&k);
	//postavljanje gornje granice
	y=(n/k)*k;
	//deljenje gornje granice sa brojem k
	y/=k;
	//postavljanje donje granice
	x=(m/k)*k;
	/*ako je donja granica manja od pocetne vrednosti intervala
	onda se na nju dodaje k*/
	if (x<m){
		x+=k;
	}
	//deljenje donje granice sa k
	x/=k;
	/*ispisuje zeljeni broj prema formuli (max+1-min)+min, 
	ali pomnozen sa k da bi ispunio uslov*/
	printf("%d\n", (rand()%(y +1 -x)+x)*k);
	return 0;
}