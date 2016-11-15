#include <stdio.h>
#include <stdlib.h>
/*Izračunati n! za uneto n.*/
int main(){
    int n,m=1;
    scanf("%d", &n);
    while(n>0){
        m=m*n;
        n--;
    }
    printf("%d\n", m);
    return 0;
}
