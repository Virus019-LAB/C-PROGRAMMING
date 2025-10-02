/*
name:Gideon Ngunju
registration number:CT100/G/26133/25
Description:FINAL EXAM QUESTIONARE
*/

#include <stdio.h>

int main()
{
	int attendance;
	int average_marks;
	
	//user input
printf("MY ATTENDANCE IN PERCENT: ");
scanf("%d", & attendance);
printf("MY AVERAGE_MARKS: ");
scanf("%d", & average_marks);

//conditions
if (attendance >=75 && average_marks >=40) {
	printf("YOUR ELIGIBLE FOR THE EXAMS");
}else {
	printf("NOT ELIGIBLE  FOR FINAL EXAM");
}
	return 0;
}
