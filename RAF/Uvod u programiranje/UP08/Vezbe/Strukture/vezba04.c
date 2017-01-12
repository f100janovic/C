#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_SIZE 80
typedef struct{
    char ime[25];
    char prezime[25];
    unsigned godine;
} osoba;
void ucitaj(osoba* o){
    fflush(stdin);
    gets(o->ime); gets(o->prezime); scanf("%d",&o->godine);
}
void sort(osoba o[], int n){
    int i,j;
    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
            if(strcmpi(o[i].prezime,o[j].prezime)>0){
                osoba tmp=o[i];
                o[i]=o[j];
                o[j]=tmp;
            }
}
int main(){
    int i,n;
    osoba o[MAX_SIZE],*pok_o;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        ucitaj(&o[i]);
    }
    sort(o,n);
    for(pok_o=o;pok_o<o+n;pok_o++){
        printf("\n%s\n%s\n%d\n",pok_o->ime,pok_o->prezime,pok_o->godine);
    }
    return 0;
}
