/*
NAME:GIDEON  WANJOHI NGUNJU
REG NO:CT100/G/26133/25
DESCRIPTION:A-WHILE-LOOP-BANK-WITHDAWAL
*/

#include <stdio.h>

int main()
{
	printf("using while loop: \n");
	double withdraw;
	double balance=2000;
	while (balance > 0)
	{
		printf("my balance:  %f\n", balance);
		printf("input withdrawal amount:  ");
		scanf("%lf", &withdraw);
	if (withdraw <= 0) {
            printf("enter a positive amount to withdraw.\n");
            continue;
			}
	balance-= withdraw;
	printf("my balance: %lf\n\n", balance);
	}
	printf("my balance is zero or negative");
	return 0;

}
