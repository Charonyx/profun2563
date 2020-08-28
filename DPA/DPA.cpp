#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() 
{
	int i, j, n, num, k[9999];
	char a[9999];
	printf("Enter the number of element(s) : ");
	scanf("%d", &n);
	if (n >= 3 && n <= 10000) 
	{
		for (i = 0; i < n; i++) 
		{
			printf("%d. Enter a number : ", i + 1);
			scanf("%d", &num);
			if (num >= 2 && num <= 10000) 
			{
				k[i] = 0;
				for (j = 1; j < num; j++) 
				{
					if (num % j == 0) 
					{
						k[i] += j;
					}
				}
				//				printf("\n%d ",k[i]);
				if (k[i] == num) 
				{
					a[i] = 'P';
				}
				else if (k[i] < num) 
				{
					a[i] = 'D';
				}
				else if (k[i] > num) 
				{
					a[i] = 'A';
				}
			}
			else
			{
				printf("Error! Enter a number between 2 and 10,000 , please.");
				break;
			}
		}
		printf("---------------------------\n");
		j = 0;
		while (j < n && num >= 2 && num <= 10000)
		{
			printf("%d. %c\n", j + 1, a[j]);
			j++;
		}
	}
	else
	{
		printf("Error! Enter a number between 3 and 10,000, please.");
	}
	return 0;
}