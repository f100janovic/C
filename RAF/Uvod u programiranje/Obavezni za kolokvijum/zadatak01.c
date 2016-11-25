#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*NP koji ispisuje slučajan broj u intervalu od m do n koji je deljiv sa k*/
int main()
{
	int m,n,k,x,y;
	srand(time(0));
	scanf("%d %d %d",&m,&n,&k);
	y=(n/k)*k;
	y/=k;
	x=(m/k)*k;
	if (x<m){
		x+=k;
	}
	x/=k;
	printf("%d\n", (rand()%(y +1 -x)+x)*k);
	return 0;
}
