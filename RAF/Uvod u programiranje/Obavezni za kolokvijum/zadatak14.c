#include <stdio.h>
#include <stdlib.h>
//Ispisati zbir cifara unetog broja n. Broj cifara broja nije unapred poznat
int main(){
    int n,s=0;
    scanf("%d",&n);
    while(n>0){
        s=s+n%10;
        n/=10;
    }
    printf("%d\n", s);
    return 0;
}
