#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void peri(float, float);
void area(float, float);
int main()
{
	float a, b;
	printf("Enter the width of a rectangle \t: ");
	scanf("%f", &a);
	printf("Enter the height of a rectangle : ");
	scanf("%f", &b);
	if (a > 0 && b > 0)
	{
		peri(a, b);
		area(a, b);
	}
	else
	{
		printf("\nCan't make a rectangle.\nEnter a positive number, please.");
	}
	return 0;
}
void peri(float a, float b)
{
	printf("Perimeter \t\t\t: %.2f\n", 2 * (a + b));
}
void area(float a, float b)
{
	printf("Area \t\t\t\t: %.2f", a * b);
}