#include <stdio.h>
#include <stdlib.h>
/*
The goal is to print 
1234
2341
3412
4123
*/
int main(){

	int i,j;
	//prvi for loop je za redove, tj prati u kom smo trenutno redub
	for (i = 0; i < 4; i++){
		/*
		drugi for loop stampa brojeve
		i+4 je da bi uvek odstampao 4 broja
		buduci da se "j" povecava kad i "i"
		uvek ce da izbaci 4 vrednosti
		 */
    	for (j = i; j < i + 4; j++){
    		//stampa ostatak pri deljenju + 1
	        printf("%d",(j % 4) + 1);
	    }
	    //salje u novi red
	    printf("\n");
	}
	return 0;
}