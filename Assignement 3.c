#include <stdio.h>
int main(int argc, char** argv)
{
	float H,W;
	double BMI;
	printf("Enter the height:\n");
	scanf("%f",&H);
	printf("Enter the weight:\n");
	scanf("%f",&W);
	BMI=H/(W*W);
	printf("The Body Mass Index(BMI)=\n%lf",BMI);
	return 0;
}