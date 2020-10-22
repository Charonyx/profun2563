#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int i = 0;
int luckyNum(unsigned, unsigned, unsigned);
int main()
{
	unsigned w, h, a;
	printf("Enter width \t: ");
	scanf("%u", &w);
	printf("Enter length \t: ");
	scanf("%u", &h);
	if (w > 0 && h > 0 && w <= 10000 && h <= 10000)
	{
		a = w * h;
		//		printf("%u", a); 
		luckyNum(w, h, a);
		if (i == 1)
		{
			printf("Yes");
		}
		else
		{
			printf("No");
		}
	}
	else
	{
		printf("Enter a positive number, please!");
	}
	return 0;
}

int luckyNum(unsigned w, unsigned h, unsigned a)
{
	while (w > 0 || h > 0 || a > 0)
	{
		if (w % 10 == 3 || w % 10 == 6 || w % 10 == 9)
		{
			i = 1;
			break;
		}
		if (h % 10 == 3 || h % 10 == 6 || h % 10 == 9)
		{
			i = 1;
			break;
		}
		if (a % 10 == 3 || a % 10 == 6 || a % 10 == 9)
		{
			i = 1;
			break;
		}
		w /= 10;
		h /= 10;
		a /= 10;
	}
	return i;
}