#include <stdio.h>
#include <stdlib.h>
/*NP koji proverava da li je uneta godina prestupna*/
int main(){
	int i;
	//unos godine
	scanf("%d", &i);
	/*
	Algoritam:
	Godina je prestupna ako broj godine deljiv sa četiri, i
	važi jedno od sledeća dva:
		-broj godine nije deljiv sa 100
		-broj godine je deljiv sa 400
	*/
	if (i%4==0){
		if (i%100!=0||i%400==0){
			printf("Godina je prestupna\n");
		}
		else{
			printf("Godina nije prestupna\n");
		}
	}
	else{
		printf("Godina nije prestupna\n");
	}

	return 0;
}