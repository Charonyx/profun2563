#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int n, b, c, B, x; //bottle & bottle_cap & new_bottle
void bottle();
int main()
{
	printf("Enter money \t\t: ");
	scanf("%d", &n);
	if (n >= 20 && n <= 50000)
	{
		bottle();
		printf("Bottle(s) of juice \	t: %d", B);
	}
	else
	{
		printf("Error!");
	}
	return 0;
}
void bottle()
{
	n /= 20;

	b = n;
	c = b;
	B = b;

	while (c >= 4 || b >= 2)
	{
		x = b / 2;
		B += x;
		b += x - (2 * x);
		c += x;

		x = int(c / 4);
		B += x;
		c += x - (4 * x);
		b += x;
	}
}