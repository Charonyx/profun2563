#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void star(int);
int main()
{
	int n;
	printf("Enter a positive number : ");
	scanf("%d", &n);
	if (n >= 1 && n <= 50) {
		star(n);
	}
	else
	{
		printf("Enter a positive number between 1 and 50, please!");
	}
	return 0;
}
void star(int n)
{
	int i, j;
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - (i + 1); j++)
		{
			printf(" ");
		}
		for (j = 0; j < i + 1; j++)
		{
			if (j == 0 || j == i)
				printf("* ");
			else
				printf("  ");
		}
		printf("\n");
	}
	for (i = n; i > 0; i--)
	{
		for (j = n - i; j > 0; j--)
		{
			printf(" ");
		}
		for (j = i; j > 0; j--)
		{
			if (j == i || j == 1)
				printf("* ");
			else
				printf("  ");
		}
		printf("\n");
	}
}