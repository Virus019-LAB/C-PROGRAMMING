/*
name:Gideon Ngunnju
registration number:CT100/G/26133/25
Description:loan application questionare
*/

#include <stdio.h>

int main()
{
	int age;
	int income;
	
	//user input
printf("kindly input your age: ");
scanf("%d", & age);
printf("we kindly request your annual income in ksh: ");
scanf("%d", & income);

//conditions
if (age >=21 && income >=21000) {
	printf("congratulation you qualify for loan request");
}else {
	printf("unfortunately, we are unable to offer you a loan at this time");
}
	return 0;
}
