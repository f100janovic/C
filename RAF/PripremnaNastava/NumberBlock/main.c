#include <stdio.h>
#include <stdlib.h>
/*
Output za 4 je
1234
2341
3412
4123
*/
int main(){

	int i,j,n;
	//unosi se n vrednost
	scanf("%d", &n);
	//prvi for loop je za redove, tj prati u kom smo trenutno redub
	for (i = 0; i < n   ; i++){
		/*
		drugi for loop stampa brojeve
		i+n je da bi uvek odstampao n broja
		buduci da se "j" povecava kad i "i"
		uvek ce da izbaci n vrednosti
		 */
    	for (j = i; j < i + n; j++){
    		//stampa ostatak pri deljenju + 1
	        printf("%d",(j % n) + 1);
	    }
	    //salje u novi red
	    printf("\n");
	}
	return 0;
}
