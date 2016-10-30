#include <stdio.h>
#include <stdlib.h>
/*
ispisuje
*****
*    *
*    *
*    *
*****
*/
int main(){
    int i,n,d,e,x;
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        if(i==1||i==n){
            for(e=1;e<=n;e++){
                printf("*");
            }
        }
        else{
            for(x=1;x<=n;x++){
                if(x==1||x==n){
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    return 0;
}
