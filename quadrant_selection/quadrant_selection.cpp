#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	float x, y;
	printf("Enter point(x,y) in form x y : ");
	scanf("%f %f", &x, &y);

	printf("The point (%.2f,%.2f) lies in ",x,y);
	if (x == 0 && y == 0) 
	{
		printf("Origin");
	}
	else if (y == 0) 
	{
		printf("X Axis");
	}
	else if (x == 0) 
	{
		printf("Y Axis");
	}

	else if (x > 0 && y > 0) 
	{
		printf("I quadrant");
	}
	else if (x < 0 && y > 0) 
	{
		printf("II quadrant");
	}
	else if (x < 0 && y < 0) 
	{
		printf("III quadrant");
	}
	else if (x > 0 && y < 0) 
	{
		printf("IV quadrant");
	}
	printf(".");
	return 0;
}
