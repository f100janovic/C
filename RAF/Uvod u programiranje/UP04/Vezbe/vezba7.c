#include <stdio.h>
#include <stdlib.h>
/*
ispisuje
    *
   * *
  * * *
 * * * *
* * * * *
*/
int main(){
    int i,n,d;
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        for(d=1;d<=i;d++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
