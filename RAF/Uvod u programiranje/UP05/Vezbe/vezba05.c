#include <stdio.h>
#include <stdlib.h>
//1+1/2!+1/3!+...
float faktorijel(float n){
    float s=1,i;
    for(i=n;i>=2;i--){
        s=s*i;
    }
    return s;
}

int main(){
    float i,n;
    float s=0.00;
    scanf("%f", &n);
    for(i=1;i<=n;i++){
        s=s+(1/(faktorijel(i)));
    }
    printf("%.16f\n", s);//.16 da bi se videla razlika, posle 6 je neprimetno ako je sa 2 decimale
    return 0;
}
