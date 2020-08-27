#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() 
{
	int i, j, n, num, k[999];
	char a[999];
	printf("Enter the number of element(s) : ");
	scanf("%d", &n);
	if (n >= 3 && n <= 1000) 
	{
		for (i = 0; i < n; i++) 
		{
			printf("%d. Enter a number : ", i);
			scanf("%d", &num);
			if (num >= 2 && num <= 1000) 
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
/*			else
			{
				printf("Error! Enter a positive number, please.");
				break;
			}
	*/	}
		i = 0;
		while (a[i] != '\0') 
		{
			printf("%c\n", a[i]);
			i++;
		}
	}
	else
	{
		printf("Error! Enter a positive number, please.");
	}
	return 0;
}