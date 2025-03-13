#include <stdio.h>
int main()
{
	int num1=90;
	float num2=899.99,num3=704.4;
	double prod;
	float avg;
	avg=(num1+num2+num3)/3;
	prod=(num1*num2*num3);
	printf("The average=%f \nThe product=%lf",avg,prod);
	return 0;
}