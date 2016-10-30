#include <stdio.h>
#include <stdlib.h>
/*
ispisuje
*
***
*****
*******
*********
*/
int main(){
    int i,n,d;
    scanf("%d", &n);
    for(i=1;i<=2*n;i+=2){
        for(d=1;d<=i;d++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
