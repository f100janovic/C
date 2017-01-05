#include <stdio.h>
#include <stdlib.h>
/*Napisati funkciju koja istovremeno računa
aritmetičku sredinu parnih članova i
aritmetičku sredinu prostih članova unetog niza A.
*/
int prost(int* a){
    int i;
    for(i=2;i<=*a;i++){
        if(*a%i==0){
            return 0;
            break;
        }
        else if(i==*a-1){
            return 1;
        }
    }
    return *a;
}
void aritmetickaSredina(int* a, int n, int *par, int *pro){
  int i,pa,pr;
  for(i=0;i<n;i++){
    if(prost(a[i])){pr++;*pro+=*a;}
    if(a[i]%2==0){pa++;*pro+=*a;}
    *par=(double)*par/pa;
    *pro=(double)*pro/pr;
  }

}
int main(){
  int par=0,pro=0,n,a[100],i;
  scanf("%d", &n);
  for(i=0;i<n;i++)
    scanf("%d", &a[i]);
  aritmetickaSredina(a,n,&par,&pro);
  printf("%f %f\n", pro,par);
  return 0;
}
