#include <stdio.h>
#include <stdlib.h>
//Napisati funkciju nzd za dva broja
int nzd(int a, int b) {
    int c;
      while ( a != 0 ) {
         c = a; a = b%a;  b = c;
      }
      return b;
}
int main(){
    int a,b;
    scanf("%d %d", &a,&b);
    printf("nzd broja %d i %d je %d\n", a,b,nzd(a,b));
    return 0;
}
