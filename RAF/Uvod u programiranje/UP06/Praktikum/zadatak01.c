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
void sortirajKolone(int matrica[][100], int n, int m){
    /*
    2 1 2   1 1 1
    3 3 2 ->2 2 2
    1 2 3   3 3 3
    */
    int i,j,k, temp;
    for(j=0;j<m;j++){
        for(i=0;i<n;i++){
            for(k=i+1;k<n;k++){
                if(matrica[i][j]>matrica[k][j]){
                    temp=matrica[i][j];
                    matrica[i][j]=matrica[k][j];
                    matrica[k][j] = temp;
                }
            }
        }
    }
}
void matricaSpiralno(int matrica[][100], int m, int n){
    int i,j,d=0,posi=1,posj=1,nextposi,nextposj;
    for(i=0;i<=n+1;i++){
        for(j=0;j<m+1;j++){
            if(i==0 || i==n+1 || j==0 || j==m+1) matrica[i][j]=0;
            else matrica[i][j]= -1;
        }
    }
    for(i=1;i<=n*m;i++){
        matrica[posi][posj]=i;
        nextPos(&nextposi, &nextposj, posi, posj, d);
        if(matrica[nextposi][nextposj] == -1){
            posi = nextposi;
            posj = nextposj;
        }
        else{
            d=(d+1)%4;
            nextPos(&nextposi, &nextposj, posi, posj, d);
            posi = nextposi;
            posj = nextposj;
        }
    }
    for(i=1; i<=n;i++){
        for(j=1;j<=m;j++){
            matrica[i-1][j-1] = matrica[i][j];
        }
    }
}
void nextPos(int* nextposi, int* nextposj, int posi, int posj, int d){
    switch(d){
            case 0:
                *nextposi = posi;
                *nextposj = posj + 1;
                break;
            case 1:
                *nextposi = posi + 1;
                *nextposj = posj;
                break;
            case 2:
                *nextposi = posi;
                *nextposj = posj - 1;
                break;
            case 3:
                *nextposi = posi - 1;
                *nextposj = posj;
        }
}
int main()
{
    int matrica[100][100],m,n;
    printf("Unesi dimenzije matrice\n");
    scanf("%d %d", &m, &n);
    //(matrica,m,n);
    //sortirajKolone(matrica,m,n);
    matricaSpiralno(matrica,m,n);
    ispisi(matrica,m,n);
    min(matrica,m,n);
    max(matrica,m,n);
    return 0;
}
