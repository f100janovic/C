#include <stdio.h>
#include <stdlib.h>
/*NP koji određuje da li uneti broj prost.
 Broj je prost ako je deljiv samo sa sobom i sa 1*/
int main(){
    int i,n;
    scanf("%d",&n);
    //proverava da li je broj deljiv bilo kojim brojem od 2 do n/2
    for(i=2;i<=n/2;i++){
        //ako je deljiv bilo kojim brojem on ispisuje da nije prost i prekida se petlja
        if(n%i==0){
            printf("Nije prost\n");
            break;
        }
        //a ako dodje do kraja petlje onda ispisuje da jeste prost
        if(i==n/2) printf("Jeste prost\n");
    }
    return 0;
}
