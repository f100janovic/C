#include <stdio.h>
#include <stdlib.h>
/*
Output za 4 je
1111
1222
1233
1234
*/
int main(){

	int i,z,n;
	//unosi se vrednost n
	scanf("%d", &n);
	//prvi for loop je za redove, tj prati u kom smo trenutno redub
	for (i = 1; i <= n; i++){
		//drugi loop stampa n cifre u redu
    	for (z = 1; z <= n; z++){
    		/*ako broj cifre u redu(z) predje broj reda(i) onda stampa broj reda,
    		a ako ne, onda stampa broj cifre u redu*/
	        if(z<=i){
                printf("%d", z);
	        }
	        else{
                printf("%d", i);
            }
	    }
	    //salje u novi red
	    printf("\n");
	}
	return 0;
}
