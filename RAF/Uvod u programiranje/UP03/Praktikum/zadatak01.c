#include <stdio.h>
#include <stdlib.h>
/*Napisati funkciju koja vraca najveci broj uzastopnih istih cifara u datom broju.
Naci koji od n unetih brojeva ima najvecu vrednost funkcije.
Ako vise brojeva ima istu vrednost,ispisati manji od njih*/
int brojac(int a){
    int brojac=0,max=-1,prev=-1,d;
    while(a){
        d=a%10;
        a/=10;
        if(d==prev){
            brojac++;
            if(brojac>max) max=brojac;
        }
        else{
            brojac=1;
            prev=d;
        }

    }
    return max;
}
int main(){
    int broj;
    scanf("%d",&broj);
    printf("%d\n", brojac(broj));
    return 0;
}
