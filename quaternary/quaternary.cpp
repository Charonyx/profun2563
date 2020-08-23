#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	long i = 0, j = 0, n, a[100000];
	printf("Enter a positive decimal number : ");
	scanf("%ld", &n);
	if (n > 0 || n == 0)
	{
		printf("Quaternary number of %ld is \t: ", n);
		while (n > 0)
		{
			a[i] = n % 4;
			n /= 4;
			i++;
		}

		for (j = i - 1; j >= 0; j--)
		{
			printf("%ld", a[j]);
		}
	}
	else
	{
		printf("Error!\nPlease ennter a positive decimal number !!");
	}
	return 0;
}