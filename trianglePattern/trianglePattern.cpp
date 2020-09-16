#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void tri(int);
int main() 
{
	int n;
	printf("Enter a positive integer : ");
	scanf("%d", &n);
	if (n > 0)
	{
		tri(n);
	}
	else
	{
		printf("Enter a positive integer, please!");
	}
	return 0;
}
void tri(int n)
{
	int i, j;
	for (i = 0; i < n; i++) {
		for (j = 0; j < i; j++) {
			printf("  ");
		}
		for (j = i; j < n; j++) {
			printf("* ");
		}
		printf("\n");
	}
}