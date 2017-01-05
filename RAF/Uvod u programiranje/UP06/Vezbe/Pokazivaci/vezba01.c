#include <stdio.h>
#include <stdlib.h>
//zamenjuje vrednosti 2 int-a
void swap(int *p, int *q){
  int t=*p;*p=*q; *q=t;
}
int main(){
  int p,q;
  scanf("%d %d", &p, &q);
  swap(&p,&q);
  printf("%d %d", p, q);
  return 0;
}
