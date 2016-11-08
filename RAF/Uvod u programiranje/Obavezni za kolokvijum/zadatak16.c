#include <stdio.h>
#include <stdlib.h>
//Napisati funkciju nzs za dva broja
int nzs(int a, int b){
    int c;
    c = (a>b) ? a : b;
    while((c%a!=0)||(c%b!=0)){
        c++;
    }
    return c;
}
int main(){
    int a,b;
    scanf("%d %d", &a,&b);
    printf("nzs broja %d i %d je %d\n", a,b,nzs(a,b));
    return 0;
}
