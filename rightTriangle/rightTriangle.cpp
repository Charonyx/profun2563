#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
void rightTri(int, int);
int main()
{
	int a, b;
	printf("Enter the side (1) length of a triangle : ");
	scanf("%d", &a);
	printf("Enter the side (2) length of a triangle : ");
	scanf("%d", &b);
	if (a > 0 && b > 0)
	{
		rightTri(a, b);
	}
	else
	{
		printf("Oops! can't find the hypotenuse. \nEnter a positive integer,please!");
	}
	return 0;
}
void rightTri(int x, int y)
{
	printf("Hypotenuse  : %.2f", sqrt((a * a) + (b * b)));
}