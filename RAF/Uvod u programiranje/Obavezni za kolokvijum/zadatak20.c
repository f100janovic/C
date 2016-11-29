#include <stdio.h>
#include <stdlib.h>
//NP koji za uneti broj n određuje njegov najbliži prost broj.
int prost(int a){
    int n,i;
    for(i=2;i<=a;i++){
        if(a%i==0){
            return 0;
            break;
        }
        else if(i==a-1){
            return 1;
        }
    }
    return n;
}

int main(){
    int i,n,a,b,c,d,l;
    scanf("%d", &n);
    i=1;
    l=n;
    while(!prost(n)){
        n++;
    }
    b=n-l;
    a=n;
    n=l;
    while(!prost(n)&&(n)>0){
        n--;
    }
    d=l-n;
    c=n;
    n=l;
    if(b>d){
        printf("%d je najblizi prost broj broju %d\n",c,n);
    }
    else{
        printf("%d je najblizi prost broj broju %d\n", a,n);
    }
    return 0;
}
