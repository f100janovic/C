#include <stdio.h>
#include <stdlib.h>
/*
ispisuje
1   2   3   4   5
2   4   6   8 10
3   6   9 12 15
4   8 12 16 20
5 10 15 20 25

*/
int main(){
    int i,n,d,e,x;
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        e=i;
        for(d=1;d<=n;d++){
            printf("%d ", e);
            e+=i;
        }
        printf("\n");
    }
    return 0;
}
