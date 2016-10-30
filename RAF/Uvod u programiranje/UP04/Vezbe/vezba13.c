#include <stdio.h>
#include <stdlib.h>
/*
ispisuje
1 1 1 1 1
1 2 2 2 2
1 2 3 3 3
1 2 3 4 4
1 2 3 4 5

*/
int main(){
    int i,n,d;
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        for(d=1;d<=n;d++){
            if(d<=i) printf("%d", d);
            else printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}
