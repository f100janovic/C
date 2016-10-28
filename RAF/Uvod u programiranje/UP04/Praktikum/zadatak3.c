#include <stdio.h>
#include <stdlib.h>
//nzs i nzd
int nzd(int x, int y){
    while(x!=y){
        if(x>y){
            x-=y;
        }
        else{
            y-=x;
        }
    }
    return x;
}

int nzs(int c,int d){
    return (c*d)/nzd(c,d);
}
int main()
{
    //nzs
    int a,b,n,k;
    scanf("%d%d", &a,&b);
    k=nzd(a,b);
    n=nzs(a,b);
    printf("%d %d\n", k, n);
	return 0;
}
