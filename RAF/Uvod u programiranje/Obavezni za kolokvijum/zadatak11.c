#include <stdio.h>
#include <stdlib.h>
/*Ispisati najveći broj od brojeva koje unosi korisnik. Kraj je kada korisnik
unese 0.*/
int main(){
    int n,m;
    m=INT_MIN;
    n=INT_MIN;;
    while(n!=0){
        scanf("%d", &n);
        if(n>m) m=n;
    }
    printf("%d\n", m);
    return 0;
}
