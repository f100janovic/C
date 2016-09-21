#include <stdio.h>
#include <stdlib.h>

/**
The challenge was to determine if the number is even or odd
without using any mathematical functions, so how I did it was using bitwise AND(&)
**/

int main()
{
    int a;
    scanf("%d", &a);
    if(a&1){
        printf("The number is Odd\n");
        return 0;
    }
        printf("The number is Even\n");
        return 0;
    return 0;
}
