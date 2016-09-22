#include <stdio.h>
#include <stdlib.h>

/*
Changes the char from lowercase to uppercase
and vice versa
*/
int main()
{
	char a;
	scanf("%c", &a);
	if (a>=65 && a<=90){
		a=a+32;
	}else if (a>=90 && a<=123){
		a=a-32;
	}
	printf("%c\n", a);
	printf("Press any key to exit...\n");
	getche();
	return 0;
}