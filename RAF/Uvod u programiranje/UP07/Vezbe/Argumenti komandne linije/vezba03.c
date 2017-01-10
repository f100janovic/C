#include <stdio.h>
#include <stdlib.h>
/*Napisati program koji ispisuje zbir dva
broja koji se zadaju kao parametri
komandne linije.*/
int main(int argc, char *argv[]){
	int i,s=0;
	for(i=0;i<argc;i++){
		s=s+atoi(argv[i]);
	}
	printf("%d\n",s);
	return 0;
}