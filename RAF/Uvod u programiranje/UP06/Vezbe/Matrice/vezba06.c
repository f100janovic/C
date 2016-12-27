#include <stdio.h>
#include <stdlib.h>
//NP koji za unetu matricu a kreira transponovanu matricu b
void upis(int a[][100], int n, int m){
  int i,j;
  for(i=0;i<n;i++)
    for(j=0;j<m;j++)
      scanf("%d", &a[i][j]);
}
void ispis(int a[][100], int n, int m){
  int i,j;
  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      printf("%d\t", a[i][j]);
    }
    printf("\n");
  }

}
void transponuj(int a[][100], int b[][100],int n, int m){
  int i,j;
  for(i=0;i<n;i++)
    for(j=0;j<n;j++)
      b[i][j]=a[j][i];
}
int main(){
  int a[100][100],b[100][100];
  int n,i,j;
  scanf("%d", &n);
  upis(a,n,n);
  transponuj(a,b,n,n);
  ispis(b,n,n);
  return 0;
}
