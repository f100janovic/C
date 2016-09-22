#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
The sum of the squares of the first ten natural numbers is,

1^2 + 2^2 + ... + 10^2 = 385
The square of the sum of the first ten natural numbers is,

(1 + 2 + ... + 10)2 = 552 = 3025
Hence the difference between the sum of the squares of the
first ten natural numbers and the square of the sum is 3025 - 385 = 2640.

Find the difference between the sum of the squares of the
first one hundred natural numbers and the square of the sum.
**/

int main()
{
    int i,p,n,z,k;
    p=0;
    n=0;
    for(i=1;i<=100;i++){
        k=pow(i,2);
        p=p+k;
    }
    i=1;
    for(i=1;i<=100;i++){
        n=n+i;
    }
    z=pow(n,2);
    printf("%d\n", z-p);
    return 0;
}
