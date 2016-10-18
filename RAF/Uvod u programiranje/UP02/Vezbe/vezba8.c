#include <stdio.h>
#include <stdlib.h>
/*Napisati program koji za uneti ugao u stepenima ispisuje
 kvadrant kome pripada. Ugao može da bude veći od 360 stepeni.*/
int main(){
	int i;
	scanf("%d", &i);
	//svodi ugao na ugao do 360 stepeni
	i=i%360;
	//ako je prvi kvadrant ispisuje I
	if(i<=90){
		printf("I\n");
	}
	//ako je drugi kvadrant ispisuje II
	else if(i<=180){
		printf("II\n");
	}
	//ako je treci kvadrant ispisuje III
	else if(i<=270){
		printf("III\n");
	}
	//ako je cetvrti kvadrant ispisuje IV
	else{
		printf("IV\n");
	}
	return 0;
}