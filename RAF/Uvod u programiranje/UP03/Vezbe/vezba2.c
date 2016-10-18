#include <stdio.h>
#include <stdlib.h>
/*NP koji određuje da li uneti broj prost.
 Broj je prost ako je deljiv samo sa sobom i sa 1*/
int main(){
    int i,n;
    scanf("%d",&n);
    for(i=2;i<=n/2;i++){
        if(n%i==0) printf("Nije prost\n"); break;
    }
    return 0;
}
