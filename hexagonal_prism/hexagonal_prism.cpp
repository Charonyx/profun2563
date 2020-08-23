#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

void volume(float, float);
void surface(float, float);

int main()
{
	float a, b;
	printf("Enter the side length of a hexagonal prism : ");
	scanf("%f", &a);
	printf("Enter the height of a hexagonal prism : ");
	scanf("%f", &b);

	if (a >= 0 && b >= 0)
	{
		volume(a, b);
		printf("\n");
		surface(a, b);
	}
	else
	{
		printf("Please enter a positive number !!");
	}
	return 0;
}
void volume(float x, float y)
{
	printf("Volume\t\t : %.2f", (3 * sqrt(3) / 2 * x * x) * y);
}
void surface(float m, float n)
{
	printf("Surface area\t : %.2f", (3 * sqrt(3) / 2 * m * m) * 2 + (6 * m * n));
}