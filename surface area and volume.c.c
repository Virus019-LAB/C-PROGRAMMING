/*
Name:GIDEON NGUNJU
REG:CT100/G/26133/25
DESCRIPTION:FINDING S.A AND VOLUME
surface_area = 2*M_PI*r*r+2*M_PI*r*h
volume = M_PI*r*r*h
*/
#include <stdio.h>
#include <math.h> 

int main()
{
	double r, h, surface_area, volume;
	printf("\n input radius: ");
	scanf("%lf", &r);
	
	printf("\n input height: ");
	scanf("%lf",&h);
	
	surface_area = 2*M_PI*r*r+2*M_PI*r*h;
	volume = M_PI*r*r*h;
	
	printf("surface_area of cylinder = %.2f\n", surface_area);
	printf("The volume of the cylinder =%.2f\n", volume);
	
	return 0;
}