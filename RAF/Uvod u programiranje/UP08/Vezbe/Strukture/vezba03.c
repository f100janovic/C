#include <stdio.h>
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
int main(){
    int i,n;
    osoba o[MAX_SIZE],*pok_o;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        ucitaj(&o[i]);
    }
    for(pok_o=o;pok_o<o+n;pok_o++){
        printf("\n%s\n%s\n%d\n",pok_o->ime,pok_o->prezime,pok_o->godine);
    }
    return 0;
}
