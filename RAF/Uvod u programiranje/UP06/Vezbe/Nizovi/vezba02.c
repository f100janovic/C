#include <stdio.h>
#include <stdlib.h>
//funkcije za upis i ispis u niz
void upis(int a[], int n){
  int i;
  for(i=0;i<n;i++){
    scanf("%d", &a[i]);
  }
}
void ispis(int a[], int n){
  int i;
  for(i=0;i<n;i++){
    printf("%d\n", a[i]);
  }
}
int main(){
  int a[100],n;
  scanf("%d", &n);
  upis(a,n);
  ispis(a,n);
  return 0;
}
