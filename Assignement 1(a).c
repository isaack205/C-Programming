#include <stdio.h>
int main()
{
	const float pie=3.14;
	float r=4.5;
	double volume;
	volume=(4*pie*r*r*r)/3;
	printf("The volume=%lf",volume);
	return 0;
}