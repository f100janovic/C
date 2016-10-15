#include <stdio.h>
#include <stdlib.h>
//NP koji proverava da li je broj K deljiv brojem L
int main(){
	int k,l;
	//unos broja K i broja L
	scanf("%d %d",&k,&l);
	//ako je ostatak pri deljenju K sa L jednak 0
	if(k%l==0){
		//onda je broj K deljiv brojem L
		printf("Broj %d je deljiv brojem %d\n", k, l);
	}
	//a ako nije
	else{
		//onda broj K nije deljiv brojem L
		printf("Broj %d nije deljiv brojem %d\n", k, l);
	}
	return 0;
}