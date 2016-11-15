#include <stdio.h>
#include <stdlib.h>
/*Napisati funkciju koja vraća da li je uneti broj n prost broj*/
void prost(int n){
    int i;
    for(i=2;i<n;i++){
        if(n%i==0){printf("nije prost\n"); break;}
        if(i==n-1) printf("prost\n");
    }
}
int main(){
    int n;
    scanf("%d", &n);
    prost(n);
    return 0;
}
