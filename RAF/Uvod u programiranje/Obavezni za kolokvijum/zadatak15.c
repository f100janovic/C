#include <stdio.h>
#include <stdlib.h>
//Napisati funkciju nzd za dva broja
int nzd(int a, int b) {
  if (b == 0)
    return a;

  return nzd(b, a % b);
}
int main(){
    int a,b;
    scanf("%d %d", &a,&b);
    printf("nzd broja %d i %d je %d\n", a,b,nzd(a,b));
    return 0;
}
