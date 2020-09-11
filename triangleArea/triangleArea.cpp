#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
float s = 0, area = 1;
void triArea(int side[3]);
int main()
{
	int  side[4] = {0}, i = 1, error = 0;
	while (i != 4)
	{
		printf("Enter the side (%d) length of a triangle : ", i);
		scanf("%d", &side[i]);
		if (side[i] == 0 || side[i] < 0)
		{
			error = 1;
			break;
		}
		s += side[i];
//		printf("%f", s);
		++i;
	}
	if (error == 0)
	{
		triArea(side);
	}
	else 
	{ 
		printf("Enter a positive integer, please!"); 
	}
	return 0;
}
void triArea(int side[4])
{
	s /= 2;
	int i = 0;
	while (i != 4)
	{
		area *= (s - side[i]);
		++i;
	}
	printf("Area : %.3f", sqrt(area));
}