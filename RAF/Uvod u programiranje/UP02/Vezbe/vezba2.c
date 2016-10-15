#include <stdio.h>
#include <stdlib.h>
/*NP koji proverava da li je uneti broj paran 
i ispisuje odgovarajuću poruku.*/

//moze se uraditi na vise nacina ali je najlaksi proverom ostatka deljenja sa 2
int main(){
	int broj;
	scanf("%d", &broj);
	//ako je ostatak pri deljenju(Modulo 2) jednak nuli onda je broj paran
	if(broj%2==0){
		printf("Broj je paran\n");
	}
	//a ako nije, onda je neparan
	else{
		printf("Broj je neparan\n");
	}
	return 0;
}