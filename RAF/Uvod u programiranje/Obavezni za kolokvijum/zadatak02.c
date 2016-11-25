#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*NP koji slučajnim izborom ispisuje jedno veliko slovo i odgovarajuće malo
slovo.
*/
int main(){
    char a;
    srand(time(0));
    a=(rand()%(90+1-65)+65);
    printf("%c %c\n", a,a+32);
    return 0;
}
