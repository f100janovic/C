#include <stdio.h>
#include <stdlib.h>
/*Ispisati najmanji od n unetih brojeva*/
int main(){
    int s,n,i,min=INT_MAX;
    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d", &s);
        if(s<min) min=s;
    }
    printf("%d\n", min);
    return 0;
}
