#include <stdio.h>
#include <stdlib.h>
//primer iz prezentacije
int main(){
  int i,*pi,n,a[100];
  scanf("%d", &n);
  pi=a;
  for(i=0;i<n;i++)
    *pi++=i+1;
  *pi-=n;
  for(i=0;i<n;i++)
    printf("%d\n", *pi++);
  return 0;
}
