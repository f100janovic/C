#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//Izračunati y po sledećoj formuli:
/*
	-2x, x<0
y=	x, 0<=x<1
	x^2, x>=1
*/
int main(){
	int x,y;
	//unos broja x
	scanf("%d", &x);
	//provera gore navedene uslove i izbacuje odgovarajucu vrednost za y
	if (x<0){
		y=(-2)*x;
	}
	else if (x>=1){
		y=pow(x,2);
	}
	else{
		y=pow(x,2);
	}
	//ispisuje vrednost y
	printf("%d\n", y);
	return 0;
}