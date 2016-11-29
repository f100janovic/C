#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
Draws a triangle with n rows
iscrtava trougao sa n redova
*/
int main()
{
 	int n,i,j,k;
	printf("Unesite visinu figure: \n"); //ovo je haos
	scanf("%d",&n);

	for(i = 1;i<=n;i++)
	{

		for(j = 0;j< n * 2 -1;j++)
		{
			printf(" ");
		 	if(j == n-i){
				for(k = 0; k < 1+(i -1)*2;k++)
				{
					printf("*");

				}
				break;
			}

		}

		printf("\n");
	}

}
