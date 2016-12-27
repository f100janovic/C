#include <stdio.h>
#include <stdlib.h>
/*NP koji računa srednju vrednost elemenata
ispod glavne dijagonale matrice*/
void upis(int a[][100], int n, int m){
  int i,j;
  for(i=0;i<n;i++)
    for(j=0;j<m;j++)
      scanf("%d", &a[i][j]);
}
int main(){
  int a[100][100];
  int n,i,j,s=0,d=0;
  double v;
  scanf("%d", &n);
  upis(a,n,n);
  for(i=0;i<n;i++)
    for(j=0;j<n;j++)
      if(i>j){s+=a[i][j];d++;}
  v=(double)s/d;
  printf("%.2lf\n", v);
  return 0;
}
