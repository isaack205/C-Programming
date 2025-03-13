#include <stdio.h>
int main()
{
	char studName[50];
	char regNO[50];
	int M1,M2,M3,M4,Sum;
	float Avg;
	printf("Enter Student name:\n");
	fgets(studName, sizeof(studName),stdin);
	printf("Enter Registration Number:\n");
	fgets(regNO, sizeof(regNO),stdin);
	printf("Enter marks of the first subject:\n");
	scanf("%d", &M1);
	printf("Enter marks of the second subject:\n");
	scanf("%d", &M2);
	printf("Enter marks of the third subject:\n");
	scanf("%d", &M3);
	printf("Enter marks of the fourth subject:\n");
	scanf("%d", &M4);
	Sum=M1+M2+M3+M4;
	Avg=Sum/4;
	printf("The student name entered is\n");
	puts(studName);
	printf("The Registration Number entered is\n");
	puts(regNO);
	printf("The sum=%d\n",Sum);
	printf("The average=%f\n",Avg);
	return 0;
}