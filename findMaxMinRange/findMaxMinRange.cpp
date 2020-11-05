#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int i, j;
void swap(int* a, int* b);

int main() {
	int n, num[100];
	printf("Enter the number of element(s) : ");
	scanf("%d", &n);
	if (n > 3 && n < 100)
	{
		for (i = 0; i < n; i++)
		{
			printf("Enter a number (%d)\t: ", i + 1);
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
		printf("The first maximum number \t: %d\n", num[0]);
		printf("The seccond maximum number \t: %d\n\n", num[1]);

		printf("The first minimum number \t: %d\n", num[n - 1]);
		printf("The seccond minimum number \t: %d\n\n", num[n - 2]);


		printf("The Range number \t\t: %d\n", num[0] - num[n - 1]);
	}
	else
	{
		printf("Please, enter a number between 4 and 99!");
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