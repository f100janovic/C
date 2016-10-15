#include <stdio.h>
#include <stdlib.h>
//ispisuje najveci broj u nizu i njegov index

//za svaki broj u nizu proverava da li je veci od max
void max(int a[],int k,int *maxk,int *maxi){
    int m;
    //vraca se na pocetak niza
    *maxi=a[0];
    //postavlja pocetni index na 0
    *maxk=0;
    /*proverava za svaki broj do kraja niza da li je najveci,
    od indexa 0 pa do indexa k*/
    for(m=0;m<k;m++){
        if ((a[m])>(*maxi)){
            *maxi=a[m];
            *maxk=m;
        }
    }
    return;
}
int main()
{
    int a[128],i,k,maxa,maxb;
    //pocetna vrednost za i
    i=1;
    //pocetna vrednost za k
    k=0;
    //dokle god je i razlicito od nule unosi se novi broj u niz
    while(i!=0)
    {
        scanf("%d", &i);
        //ako je broj veci od nule onda ga dodaje u niz i povecava brojac k za 1
        if(i!=0){
            a[k]=i; 
            k++;
        }
    }
    //a(niz) i k(brojac za indeks u nizu) su ulazne vrednosti a maxa i maxb izlazne
    //maxb = najveci broj u nizu
    //maxa = indeks najveceg broja u nizu
    max(a,k,&maxa,&maxb);
    //ispisuje maxa i maxb
    printf("%d %d\n", maxb,maxa);
    return 0;
}
