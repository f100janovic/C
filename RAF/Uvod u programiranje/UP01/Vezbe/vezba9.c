#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* NP koji ispisuje slučajan broj iz 
intervala od m do n. (m i n unosi korisnik)*/

int main(){
	srand(time(0));
	int m,n;
	//unos brojeva m i n
	scanf("%d %d", &m,&n);
	//formula za interval je (max + 1 - min)+min
	printf("%d\n", rand()%(n + 1 - m)+m);
	return 0;
}