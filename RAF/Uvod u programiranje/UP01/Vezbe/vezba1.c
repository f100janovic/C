#include <stdio.h>
#include <stdlib.h>
/* Napisati program koji za dva uneta broja 
ispisuje njihov zbir, razliku i količnik */

int main(){
	int a,b;
	//unos brojeva
	scanf("%d %d", &a, &b);
	//zbir a i b
	printf("%d\n", a+b);
	//razlika a i b
	printf("%d\n", a-b);
	//kolicnik a i b
	printf("%d\n", a/b);
	//kolicnik a i b kao double
	printf("%lf\n", (double)a/b);

	return 0;
}