#include <stdio.h>
#include <stdlib.h>
//NP koji za uneti broj meseca ispisuje njegovo ime
int main(){
	int i;
	scanf("%d", &i);
	/*najlakse je preko switch-a, 
	za svaki slucaj od 1-12 ispisuje odgovarajuci mesec*/
	switch(i){
		case 1: printf("Januar\n"); break;
		case 2: printf("Februar\n");break;
		case 3: printf("Mart\n"); break;
		case 4: printf("April\n"); break;
		case 5: printf("Maj\n"); break;
		case 6: printf("Jun\n"); break;
		case 7: printf("Jul\n"); break;
		case 8: printf("Avgust\n"); break;
		case 9: printf("Septembar\n"); break;
		case 10: printf("Oktobar\n"); break;
		case 11: printf("Novembar\n"); break;
		case 12: printf("Decembar\n"); break;
		default: printf("Broj mora imati vrednost izmedju 1 i 12\n");
	}
	return 0;
}