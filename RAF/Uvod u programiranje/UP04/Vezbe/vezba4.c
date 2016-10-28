#include <stdio.h>
#include <stdlib.h>
/*NP koji nalazi najveci prost broj od n brojeva koje unosi korisnik.
Svi brojevi su celi.*/

//proverava da li je broj prost
int prost(int a){
    int i,n;
    for(i=2;i<a;i++){
        if(a%i==0) n=0;
        else if (i==a) n=1;
    }
    return n;
}
int main(){
    int i,s,n,b,d;
    scanf("%d", &n);
    s=INT_MIN;
    printf("%d\n",s);
    b=prost(n);
    for(i=0;i<n;i++){
        scanf("%d", &d);
        b=prost(d);
        if (b && d>s){
            s=d;
        }
    }
    printf("Najveci uneti prost broj je %d\n", s);
    return 0;
}
