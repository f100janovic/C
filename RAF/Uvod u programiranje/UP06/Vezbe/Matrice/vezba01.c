#include <stdio.h>
#include <stdlib.h>
//upis i ispis matrice
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
int main(){
    int a[100][100];
    int m,n;
    scanf("%d %d", &n, &m);
    upis(a,n,m);
    ispis(a,n,m);
    return 0;
}
