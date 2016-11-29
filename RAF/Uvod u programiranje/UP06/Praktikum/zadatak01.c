#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
void upisi(int matrica[][100], int m, int n){
    int i,j;
    printf("Upisi elemente matrice\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d", &matrica[i][j]);
        }
    }
}
void ispisi(int matrica[][100], int m, int n){
    int i,j;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ", matrica[i][j]);
        }
        putchar('\n');
    }
}
void min(int matrica[][100], int m, int n){
    int i,j,min;
    min=matrica[0][0];
    for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                if(matrica[i][j]<min){
                    min=matrica[i][j];
                }
            }
        }
    printf("minimum je %d\n", min);
}
void max(int matrica[][100], int m, int n){
    int i,j,max;

    for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                if(matrica[i][j]>max){
                    max=matrica[i][j];
                }
            }
        }
    printf("maximum je %d\n", max);
}
int main()
{
    int matrica[100][100],m,n;
    printf("Unesi dimenzije matrice\n");
    scanf("%d %d", &m, &n);
    upisi(matrica,m,n);
    ispisi(matrica,m,n);
    min(matrica,m,n);
    max(matrica,m,n);
    return 0;
}
