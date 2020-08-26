#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int triCheck = 0;
void triangle_check(float, float, float);
int main() 
{
	float a, b, c, i = 0, j;
	printf("Enter side length of triangle in form a b c : ");
	scanf("%f %f %f", &a, &b, &c);
	if (a > 0 && b > 0 && c > 0) 
	{
		triangle_check(a, b, c);
		if (triCheck == 1) 
		{
			printf("can make a triangle\n");
			if (a == b || b == c || a == c) 
			{
				if (a == b && b == c && a == c) 
				{
					printf("\tEquilateral triangle\n");
				}
				else 
				{
					printf("\tIsosceles triangle\n");
				}
			}
			else 
			{
				printf("\tScalene triangle\n");
			}

			if (a * a + b * b == c * c)
			{
				printf("\tRight triangle");
			}
			else if (a * a + c * c == b * b)
			{
				printf("\tRight triangle");
			}
			else if (b * b + c * c == a * a)
			{
				printf("\tRight triangle");
			}
		}
		else
		{
			printf("cannot make a triangle");
		}
	}
	else {
		printf("Error, please enter positive numbers.");
	}
	return 0;
}
void triangle_check(float a, float b, float c)
{
	if (a + b > c)
	{
		if (a + c > b)
		{
			if (b + c > a)
			{
				triCheck = 1;
			}
		}
	}
}