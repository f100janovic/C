#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//sqrt(n+sqrt(n-1)+...+sqrt(1))
double sqrt1(int n){
    if (n==1) return 1;
    else return sqrt(n+(sqrt1(n-1)));
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%lf\n", sqrt1(n));
    return 0;
}
