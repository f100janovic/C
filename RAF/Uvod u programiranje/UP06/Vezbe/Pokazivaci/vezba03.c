#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
//min i max u nizu
void minMax(int* a, int n, int *min, int *max){
  int i;
  *min=*a;
  *max=*a;
  for(i=0;i<n;i++){
    if(*(a+i)>*max) *max=*(a+i);
    if(*(a+i)<*min) *min=*(a+i);
  }
}
int main(){
  int a[100],min,max,n,i;
  scanf("%d", &n);
  for(i=0;i<n;i++){
    scanf("%d", &a[i]);
  }
  min=INT_MAX;
  max=INT_MIN;
  minMax(a,n,&min,&max);
  printf("%d %d\n", min,max);
  return 0;
}
