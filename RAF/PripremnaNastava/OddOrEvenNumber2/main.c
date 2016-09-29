#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
The challenge was to determine if the number is odd or even without using
mathematical funcions(div,mod,+,-,*) but using to the power of was still
allowed(Not mentioned so OK to use)
**/

int main()
{
    int a;
    scanf("%d", &a);
    if( pow(-1,a) == 1){
        printf("The number is Even\n");
        return 0;
    }
        printf("The number is Odd\n");
        return 0;
    return 0;
}
