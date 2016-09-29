#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){
	int tipPercent,taxPercent;
	double mealCost,tip,tax,totalCost;
	scanf("%lf%d%d", &mealCost,&tipPercent,&taxPercent);
	tip=mealCost*tipPercent/100;
	tax=mealCost*taxPercent/100;
	totalCost=mealCost+tip+tax;
	printf("The total meal cost is %.0lf dollars.", totalCost);

	return 0;
}