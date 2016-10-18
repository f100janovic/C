#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

//gleda da li ce k1 i k2 ikad da budu u istoj poziciji u isto vreme
//10000 pokusaja da ne bi bio infinite loop
//hackerrank.com/challenge/kangaroo
int main()
{
	int k1,k2,s1,s2,i;
	scanf("%d %d %d %d",&k1,&s1,&k2,&s2);
	i=1;
	while(i<=10001){
        fflush(stdout);
		if(k1==k2){
			printf("YES\n");
            break;
		}
        else if(i==10000){
            printf("NO\n");
        }
		k1=k1+s1;
		k2=k2+s2;
		++i;

	}

	return 0;
}
