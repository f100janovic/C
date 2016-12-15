#include <stdio.h>
#include <stdlib.h>
//1+1/2+1/3+1/4+...
int main(){
    float i;
    float s=0.00;
    for(i=1;i<=5;i++){
        s=s+(1/i);
    }
    printf("%f\n", s);
    return 0;
}
