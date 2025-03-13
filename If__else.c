#include <stdio.h>
int main()
{
int m1,m2,m3,m4,sum;
float avg;
printf("Enter first subject:\n");
scanf("%d",&m1);
printf("Enter second subject:\n");
scanf("%d",&m2);
printf("Enter third subject:\n");
scanf("%d",&m3);
printf("Enter fourth subject:\n");
scanf("%d",&m4);
sum = m1+m2+m3+m4;
avg = sum/4;
printf("The average =%f\n", avg);	
if (avg >=40)
{
	printf("Grade = Pass");
}
else
{
	printf("Grade = fail");
}
	return 0;
}