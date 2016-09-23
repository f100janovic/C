#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	/*
    Draws a d wide and d high square
    Example:
	d=4
	****
	*  *
	*  *
	****
	*/

	int i,n,d,a,x;
	char c;
	c = '*';
	scanf("%d", &d);
	n=pow(d,2);
	for (i=1; i<=d;i++){
            if ((i==1)||(i==d)){
                printf("\n");
                for (a=1;a<=d;a++){
                    printf("*");
                }
            }
            else{
                printf("\n");
                for(x=1;x<=d;x++){
                    if((x==1)||(x==d)){
                        printf("*");
                    }
                    else{
                        printf(" ");
                    }
                }
            }

    }
return 0;
}
