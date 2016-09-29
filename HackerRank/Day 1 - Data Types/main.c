#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
	int i=4;
	double d = 4.0;
	char s[] = "HackerRank ";

    // Declare second integer, double, and String variables.
    int a;
    double b;
    char m[256];
    // Read and save an integer, double, and String to your variables.
    scanf("%d %lf %256[!-/0-9a-zA-Z ]", &a,&b,m);
    // Print the sum of both integer variables on a new line.
    printf("%d\n", i+a);
    // Print the sum of the double variables on a new line.
    printf("%.1lf\n", d+b);
    // Concatenate and print the String variables on a new line
    printf("%s%s", s, m);
    // The 's' variable above should be printed first.
    



	return 0;
}