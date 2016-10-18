#include <stdio.h>
#include <stdlib.h>
/*NP koji za uneti redni broj dana u nedelji 
ispisuje ime dana. Npr. 1- Ponedeljak*/
int main(){
	int i;
	scanf("%d", &i);
	/*najlakse je preko switch-a, 
	za svaki slucaj od 1-7 ispisuje odgovarajuci dan*/
	switch(i){
		case 1: printf("Ponedeljak\n"); break;
		case 2: printf("Utorak\n");break;
		case 3: printf("Sreda\n"); break;
		case 4: printf("Cetvrtak\n"); break;
		case 5: printf("Petak\n"); break;
		case 6: printf("Subota\n"); break;
		case 7: printf("Nedelja\n"); break;
		default: printf("Broj mora imati vrednost izmedju 1 i 7\n");
	}
	return 0;
}