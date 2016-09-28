#include <stdio.h>
#include <stdlib.h>
//izbacuje x[i]/n
int main()
{
    int x[500];
    double k[500];
    int i,c,n;
    i=0;
    c=1;
    //upisuju se brojevi u niz dok se ne upise 0
    while(c!=0)
    {
        scanf("%d", &c);
        if(c!=0){
            x[i]=c;
            i++;
        }
    }
    n=i;
    c=0;
    //za svaku vrednost iz niza ispisuje vrednost/broj vrednosti u nizu
    for(i=0;i<n;i++)
    {
        c=x[i];
        printf("%lf\n", (double)c/n);
        k[i]=c/n;
    }
    return 0;
}