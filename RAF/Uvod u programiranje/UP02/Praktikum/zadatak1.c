#include <stdio.h>
#include <stdlib.h>

int main()
{
	/*
		++m - odma je vrednost za 1 veca
		m++, vrednost je i dalje 1 kad se izvrsi
		za m=0
		printf("%d", m++) ispisuje 0
		printf("%d", ++m) ispisuje 1
	*/
    int m;
	m=1;
	m+=m++;
	printf("%d", m);

	/*
		Ternary operator, ima manji prioritet od ||
		a ? b : c -> ako je a true onda b, inace c
		if ( (2<3) || (5<4) ? false : true){
			printf("yes"); -> ovo se ispisuje
		}

	*/

	return 0;
}
