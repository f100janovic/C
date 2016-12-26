#include <stdio.h>
#include <stdio.h>
//prosecan broj u funkciji
void upis(int a[], int n){
  int i;
  for(i=0;i<n;i++){
    scanf("%d", &a[i]);
  }
}
double prosek(int a[], int n){
  int i,s=0;
  for(i=0;i<n;i++){
    s+=a[i];
  }
  return (double)s/n;
}
int main(){
  int a[100],n;
  scanf("%d", &n);
  upis(a,n);
  printf("Prosek %lf\n", prosek(a,n));
}
