#include <stdio.h>
#include <stdlib.h>
/*NP koji na osnovu visine osobe određuje idealnu težinu. 
Idealna težina za osobe muškog pola je : visina – 100 , 
a za osobe ženskog pola : visina – 110. 
Predvideti unošenje indikatora pola: M – muški , Z –ženski.
*/
int main()
{
	int visina;
	char pol;
	//unos visine(u cm) i pola(M ili Z)
	scanf("%d %c", &visina,&pol);
	//ako je pol muski
	if(pol=='M' || pol=='m'){
		//ispisuje visina-100
		printf("Idealna tezina je %dkg\n", visina-100);
	}
	//ako je pol zenski
	else if (pol=='Z' || pol=='z'){
		//ispisuje visina -110
		printf("Idealna tezina je %dkg\n", visina-110);
	}
	//ako je za pul uneto nesto drugo izbacuje gresku
	else{
		printf("Nije unet odgovarajuci pol!\n\a");
	}
	return 0;
}