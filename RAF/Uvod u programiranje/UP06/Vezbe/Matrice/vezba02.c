#include <stdio.h>
#include <stdlib.h>
/*NP koji ispisuje matricu
dimenzije nxn, tako da je1
na glavnoj dijagonali,
2 iznad, a 3 ispod.*/
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
        if(i==j) a[i][j]=1;
        else if(i>j) a[i][j]=3;
        else a[i][j]=2;
  ispis(a,n);
  return 0;
}
