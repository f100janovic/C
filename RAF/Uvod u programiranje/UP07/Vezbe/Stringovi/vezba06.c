#define MAX_SIZE 100
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void sort_str(char* niz[], int n){
    int i,j;
    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
            if(strcmpi(niz[i],niz[j])>0){
                char* tmp=niz[i];
                niz[i]=niz[j];
                niz[j]=tmp;
            }
}
int main(){
    char niz[MAX_SIZE][MAX_SIZE],* pok[MAX_SIZE];
    int i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        gets(niz[i]);
        pok[i]=niz[i];
    }
    sort_str(pok,n);
    for(i=0;i<n;i++)
        puts(pok[i]);
    return 0;
}
