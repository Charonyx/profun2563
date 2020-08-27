#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() 
{
	unsigned int i, j, n, num, k[9999];
	char a[9999];
	scanf("%u", &n);
	if (n >= 3 && n <= 10000) 
	{
		for (i = 0; i < n; i++) 
		{
			scanf("%u", &num);
			if (num >= 2 && num <= 100000) 
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
		}
		i = 0;
		while (a[i] != '\0') 
		{
			printf("%c\n", a[i]);
			i++;
		}
	}
	return 0;
}