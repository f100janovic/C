#include <stdio.h>
#include <stdlib.h>
/*
Outputs the biggest number out of the 3 given numbers. 
Random challenge written for a friend.
*/

int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if (a>b){
		if (a>c){
			printf("najveci broj je %d\n",a);
		}
		else{
			printf("najveci broj je %d\n", c);
		}
	}
	else{
		if(b>c){
			printf("najveci broj je %d\n", b);
		}
		else{
			printf("najveci broj je %d\n", c);
		}
	}
	return 0;
}