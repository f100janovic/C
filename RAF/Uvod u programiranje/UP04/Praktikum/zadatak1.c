#include <stdio.h>
#include <stdlib.h>
//n-ti fibonacijev broj
int main()
{
	int i,n,x,y,z;
	scanf("%d", &n);
	x=0;
	y=1;
	for(i=0;i<=n
	;i++){
		z=y;
		y=x+y;
		x=y;
	}
	printf("%d\n", y);
	return 0;
}
