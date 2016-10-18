#include <stdio.h>
#include <stdlib.h>
/*NP koji sabira što više prirodnih brojeva
 počevši od 1, ali tako da zbir mora da bude
  manji od 100. Ispisati taj zbir.*/
int main(){
	int i,s;
	s=0;
	i=1;
	//sabira dok je zbir manji od 100 i povecava i za 1
	while(1){
		//ako je zbir 100 ili veci onda while vise nije true
		//break izbacuje iz petlje
		if (s+i>=100) break;
		s+=i;
		i++;
	}
	//ispisuje konacni zbir
	printf("%d\n", s);

	return 0;
}