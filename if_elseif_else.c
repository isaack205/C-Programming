#include <stdio.h>
int main()
{
	float H,W;
	double BMI;
	printf("Enter Height in Metres:\n");
	scanf("%f", &H);
	printf("Enter Weight in KG:\n");
	scanf("%f", &W);
	BMI=W/(H*H);
	printf("The Body Mass Index(BMI) =%lf.\n", BMI);
	if (BMI<20)
	{
		printf("Under-Weight");
	}
	else if((BMI>=20)&&(BMI<=25))
	{
	    printf("Normal");	
	}
	else if((BMI>=26)&&(BMI<=30))
	{
	    printf("Over-Weight");	
	}
	else if((BMI>=31)&&(BMI<=40))
	{
	    printf("Obese");	
	}
	else
	{
	    printf("Extremely Obese");	
	}
	return 0;
}
