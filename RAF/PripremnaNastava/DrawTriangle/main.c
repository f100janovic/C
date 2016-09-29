#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
Draws a triangle with n rows
iscrtava trougao sa n redova
*/
int main()
{
    int a,n,b,d,x;
    a=1;
    scanf("%d", &n);
    for (x=0;x<n;x++){
        for(d=1;d<=n-x;d++){
            printf(" ");
        }
        for (b=1;b<=a;b++)
        {
            if(b%2==1){
                printf("*");
            }
            if(b%2==0){
                printf(" ");
            }

        }
        a+=2;
        printf("\n");
    }
    return 0;
}