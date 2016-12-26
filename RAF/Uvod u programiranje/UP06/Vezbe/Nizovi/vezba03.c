#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
//min i max u nizu
int min(int a[], int n){
  int i,s=INT_MAX;
  for(i=0;i<n;i++){
    if(a[i]<s) s=a[i];
  }
  return s;
}
int max(int a[], int n){
  int i,s=INT_MIN;
  for(i=0;i<n;i++){
    if(a[i]>s) s=a[i];
  }
  return s;
}
void upis(int a[], int n){
  int i;
  for(i=0;i<n;i++){
    scanf("%d", &a[i]);
  }
}
int main(){
  int a[100],n;
  scanf("%d", &n);
  upis(a,n);
  printf("Min %d\n", min(a,n));
  printf("Max %d\n", max(a,n));
}
