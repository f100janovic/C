#include <stdio.h>
#include <stdlib.h>
/*NP koji ispisuje n-ti stepen broja a.
Broj n je ceo broj dok je a realan broj.
 Ne koristiti funkciju pow.*/
int main(){
    int a,n,i,d;
    scanf("%d %d", &a,&n);
    d=a;
    for(i=1;i<n;i++){
        a=a*d;
    }
    printf("%d\n",a);
    return 0;
}
