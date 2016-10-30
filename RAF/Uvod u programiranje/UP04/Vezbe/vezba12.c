#include <stdio.h>
#include <stdlib.h>
/*
ispisuje
1 2 3 4 5
2 3 4 5 1
3 4 5 1 2
4 5 1 2 3
5 1 2 3 4
*/
int main(){
    int i,n,d;
    scanf("%d", &n);
    for(i=0;i<n;i++){
        for(d=i;d<=i+n;d++){
            printf("%d", (d%n)+1);
        }
        printf("\n");
    }
    return 0;
}
