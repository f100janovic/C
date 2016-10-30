#include <stdio.h>
#include <stdlib.h>
/*
ispisati:
*****
****
***
**
*
*/
int main(){
    int i,n,d;
    scanf("%d", &n);
    //broji redove unazad
    for(i=n;i>=1;i--){
        //broji koliko zvezdica treba da se ispise u redu
        for(d=1;d<=i;d++){
            printf("*");
        }
        //udara enter na svakom redu
        printf("\n");
    }
    return 0;
}
