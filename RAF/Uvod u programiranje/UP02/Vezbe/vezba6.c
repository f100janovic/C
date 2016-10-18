#include <stdio.h>
#include <stdlib.h>
/*Unose se katete dva pravougla trogula a1, a2, b1, b2. 
Odrediti trougao koji ima veću površinu.*/
int main(){
	int a1,b1,a2,b2,p1,p2;
	//unos kateta prvog trougla pa unos kateta drugog trougla
	scanf("%d %d %d %d", &a1,&b1,&a2,&b2);
	//povrsina prvog pravouglog trougla
	p1=(a1*b1)/2;
	//povrsina drugog pravouglog trougla;
	p2=(a2*b2)/2;
	//if funkcija koja proverava koja povrsina je veca
	if (p1>p2){
		printf("Trougao 1 ima vecu povrsinu\n");
	}
	else{
		printf("Trougao 2 ima vecu povrsinu\n");
	}

	return 0;
}