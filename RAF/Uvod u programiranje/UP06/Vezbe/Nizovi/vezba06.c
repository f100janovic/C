#include <stdio.h>
#include <stdlib.h>
/*NP koji za uneti niz a formira
nizove b i c tako da su elementi
niza b parni članovi niza a,
a elementi niza c su neparni
članovi niza a*/
int main(){
  int a[100],b[100],c[100],i,n,ib=0,ic=0;
  scanf("%d", &n);
  for(i=0;i<n;i++){
    scanf("%d", &a[i]);
  }
  for(i=1;i<n;i++){
    if(a[i]%2==0) b[ib++]=a[i];
    else c[ic++]=a[i];
  }
}
