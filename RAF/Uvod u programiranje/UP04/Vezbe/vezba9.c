#include <stdio.h>
#include <stdio.h>
/*
ispisuje
* * * * *
 * * * * *
* * * * *
 * * * * *
* * * * *
*/
int main(){
    int i,n,d;
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        //zato sto je svaki drugi red pomeren za space proverava da li je red paran
        if(i%2==0) printf(" ");
        //u svakom redu ispisuje n zvezdica
        for(d=1;d<=n;d++){
            printf("*");
        }
        //prelazak u sledeci red
        printf("\n");
    }
    return 0;
}
