#include <stdio.h>
#include <stdlib.h>
/*Ispisuje 1 na sporednoj matrici, 0 drugde*/
void ispis(int a[][100], int n){
  int i,j;
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      printf("%d\t", a[i][j]);
    }
    printf("\n");
  }

}
int main(){
  int a[100][100];
  int n,i,j;
  scanf("%d", &n);
  for(i=0;i<n;i++)
      for(j=0;j<n;j++)
        if(i+j==n-1) a[i][j]=1;
        else a[i][j]=0;
  ispis(a,n);
  return 0;
}
