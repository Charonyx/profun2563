#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int i, j;
void swap(int* a, int* b);

int main() {
	int n, num[100];
	printf("Enter the number of element(s) : ");
	scanf("%d", &n);
	if (n > 1 && n < 100)
	{
		for (i = 0; i < n; i++)
		{
			printf("Enter a number : ");
			scanf("%d", &num[i]);
		}
		for (i = 0; i < n; i++)
		{
			for (j = i + 1; j < n; j++)
			{
				if (num[i] < num[j])
				{
					swap(&num[i], &num[j]);
				}
			}
		}
		printf("--------------------------------\n");
		printf("The first maximum number : %d\n", num[0]);
		printf("The seccond maximum number : %d\n", num[1]);
		printf("--------------------------------\n");

		printf("The first minimum number : %d\n", num[n - 1]);
		printf("The seccond minimum number : %d\n", num[n - 2]);
		printf("--------------------------------\n");

		printf("The Range number : %d\n", num[0] - num[n - 1]);
	}
	else
	{
		printf("Please, enter a number between 2 and 99!")
	}
	return 0;
}
void swap(int* a, int* b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}