#include <stdio.h>
#include <stdlib.h>
//NP koji za uneti broj n određuje njegov najbliži prost broj.
//trenutno je infinite loop
int prost(int a){
    int n,i;
    for(i=2;i<=a;i++){
        if(a%i==0) n=0;
        else if(i==a) n=1;
    }
    return n;
}

int main(){
    int i,n,a,b,c,d,l;
    scanf("%d", &n);
    i=0;
    l=n;
    while(!prost(n+i)){
        i++;
    }
    b=i;
    a=n+i;
    printf("%d\n", a);
    i=0;
    while(!prost(n-i)&&(n-i)>0){
        i++;
    }
    d=i;
    c=n-i;
    if(b>d){
        printf("%d je najblizi prost broj broju %d\n",c,n);
    }
    else{
        printf("%d je najblizi prost broj broju %d\n", a,n);
    }
    return 0;
}
