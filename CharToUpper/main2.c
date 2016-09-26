#include <stdio.h>
#include <stdlib.h>

/*
Changes the char from lowercase to uppercase
and vice versa while typing(on enter press)
*/
int main()
{
	char a,i;
	i=0;
	while (i==0){
	scanf("%c", &a);
	if (a>=65 && a<=90){
		a=a+32;
	}else if (a>=90 && a<=123){
		a=a-32;
	}
	printf("%c", a);
}
	return 0;
}