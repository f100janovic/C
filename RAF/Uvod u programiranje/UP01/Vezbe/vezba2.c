#include <stdio.h>
#include <stdlib.h>
/*NP koji prevodi dužinu datu u stopama 
u centimetre (1 stopa = 30.48 cm ) */

int main(){
	double st;
	//unos duzine u stopama
	scanf("%lf", &st);
	//ispisuje duzinu  u cm
	printf("%lf\n", st*30.48);
	
	return 0;
}