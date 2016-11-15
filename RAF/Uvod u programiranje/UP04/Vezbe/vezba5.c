#include <stdio.h>
#include <stdlib.h>
//NP koji za uneti broj n određuje njegov najbliži prost broj.
int prost(int a){
    int n,i;
<<<<<<< HEAD
    for(i=2;i<=a;i++){
        if(a%i==0){
            return 0;
            break;
        }
        else if(i==a-1){
            return 1;
        }
=======
    for(i=2;i<a;i++){
        if(a%i==0){
            n=0;
            break;
        }
        else if(i==a-1) n=1;
>>>>>>> 7ed4b5d69e5f49e286a79e6c446cbb8e3a0e1180
    }
    return n;
}

int main(){
    int i,n,a,b,c,d,l;
    scanf("%d", &n);
    i=1;
    l=n;
    while(prost(n)==0){
        n++;
    }
<<<<<<< HEAD
    b=n-l;
    a=n;
    n=l;
    while(!prost(n)&&(n)>0){
        n--;
=======
    b=i;
    a=n+i;
    i=0;
    while(!prost(n-i)&&(n-i)>0){
        i++;
>>>>>>> 7ed4b5d69e5f49e286a79e6c446cbb8e3a0e1180
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
