/*
name:Gideon Ngunju
registration number:CT100/G/26133/25
Description:calculate-electric-bill
*/

#include <stdio.h>

int main()
{

float unit,cost_per_unit,total_cost;

	printf("Enter  units consumed:");
	scanf("%f", &unit);
	
	if (unit <=100) {
		cost_per_unit=10;
	}else if (unit>=101 && unit<=200){
		cost_per_unit =15;
	}else {
		cost_per_unit = 20;
	}
	
	total_cost = unit* cost_per_unit;
	
	printf("total_cost for %.2f units\n Total electric bill : %.2f", unit, total_cost);
 
    return 0;
}
			