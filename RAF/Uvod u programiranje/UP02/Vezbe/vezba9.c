#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*NP koji proverava da li je uneti broj Armstrongov.
 Armstrongov broj je jednak zbiru kubova svojih cifara.*/
int main(){
	int i,s,d;
	s=0;
	scanf("%d", &i);
	//zbog kasnije provere radimo sa brojem koji nije d
	d=i;
	//rastavlja broj na cifre i uzima kub svake cifre i sabira 
	while(d>0){
		s=s+pow(d%10,3);
		d/=10;
	}
	if (s!=i) printf("Nije Armstrongov\n");
	else printf("Jeste Armstrongov\n");
	return 0;
}