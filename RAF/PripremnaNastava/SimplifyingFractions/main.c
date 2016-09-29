#include <stdio.h>
#include <stdlib.h>
/*

*/
int main(){
	int a,b,temp;
	scanf("%d%d", &a,&b);
	while (b!=0){
		temp = a;
		a=b;
		b=temp%b;
	}
	printf("%d\t%d\n",a,b);
	return 0;
}