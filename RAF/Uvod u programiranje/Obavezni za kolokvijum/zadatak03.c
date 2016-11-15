#include <stdlib.h>
#include <stdio.h>
/*Ispisati najveći od n unetih brojeva*/
int main(){
    int s,i,n,max=INT_MIN;
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d", &s);
        if(s>max)max=s;
    }
    printf("%d\n", max);
    return 0;
}
