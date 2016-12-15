#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//1+1/(2+1/(3+1/(...+1/n)))
double scr(int i, int n){
    if (i==n) return n;
    return i+1/scr(i+1,n);
}
int main(){
    int n;
    scanf("%d", &n);
    printf("%lf\n", scr(1,n));
    return 0;
}
