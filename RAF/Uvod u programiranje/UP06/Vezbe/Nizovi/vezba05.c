#include <stdio.h>
#include <stdlib.h>
/*NP koji za uneti niz a formira
nizove b i c tako da su elementi
niza b: a[1],a[3],a[5]...
a niza c: a[2],a[4],a[6]...*/
int main(){
  int a[100],b[100],c[100],i,n,ib=0,ic=0;
  scanf("%d", &n);
  for(i=0;i<n;i++){
    scanf("%d", &a[i]);
  }
  for(i=1;i<n;i++){
    if(i%2==0) b[ib++]=a[i];
    else c[ic++]=a[i];
  }
}
