#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int n, i, a[10000], x, j;
	printf("Enter a positive integer : ");
	scanf("%d", &n);
	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			a[i - 1] = i;
			printf("%d", a[i - 1]);
		}
		printf("\n");
		for (j = 0; j < n - 1; j++)
		{
			x = a[0];
			for (i = 1; i <= n - 1; i++)
			{
				a[i - 1] = a[i];
			}
			a[n - 1] = x;

			for (i = 0; i < n; i++)
			{
				printf("%d", a[i]);
			}
			printf("\n");
		}
	}
	else
	{
		printf("Please enter a positve integer!!");
	}
	return 0;
}