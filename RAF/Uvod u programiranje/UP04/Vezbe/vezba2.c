#include <stdio.h>
#include <stdlib.h>
//Korisnik unosi n brojeva. Ispisati zbir cifara svih brojeva koje je korisnik uneo.
int main(){
    int i,s,n,b;
    //pocetna vrednost zbira
    s=0;
    //unos broja brojeva
    scanf("%d", &n);
    //proverava koliko je brojeva uneto do n
    for(i=0;i<n;i++){
        //unos novog broja
        scanf("%d", &b);
        //dodavanje tog broja na zbir
        s=s+b;
    }
    //ispisuje konacan zbir
    printf("%d\n", s);
    return 0;
}
