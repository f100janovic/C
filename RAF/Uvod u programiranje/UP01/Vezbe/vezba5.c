#include <stdio.h>
#include <stdlib.h>
/* Za uneto malo slovo ispisati odgovarajuće veliko. */

int main(){
	char a;
	//unos malog slova
	scanf("%c", &a);
	//upisuje odgovarajuce veliko slovo(ASCII razlika je 32)
	printf("%c\n", a-32);
	
	return 0;
}