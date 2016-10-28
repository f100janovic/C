#include <stdio.h>
#include <stdlib.h>
/*NP koji ispisuje sve trocifrene brojeve koji
- imaju cifru stotica manju od 5
- imaju neparnu cifru desetica
- imaju cifru jedinica koja je veća ili jednaka cifri desetica
*/
int main(){
    int i,k,l,n;
    for(i=100;i<=999;i++){
        //cifra stotica
        k=i/100;
        //cifra desetica
        l=(i/10)-10*k;
        //cifra jedinica
        n=i%10;
        //ako ispunjava sve uslove zadatka onda ispisuje broj
        if(k<5 && l%2==1 && n>=k){
            printf("%d\n", i);
        }
    }
    return 0;
}
