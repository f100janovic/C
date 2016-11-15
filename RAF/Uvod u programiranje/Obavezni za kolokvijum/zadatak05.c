#include <stdio.h>
#include <stdlib.h>
/*NP koji od unetog broja n pravi broj a koji ima cifre u obrnutom redosledu.
*/
int main(){
    int i,n=0;
    scanf("%d", &i);
    while(i>0){
        n=n*10;
        n=n+i%10;
        i/=10;
    }
    printf("%d\n",n);
    return 0;
}
