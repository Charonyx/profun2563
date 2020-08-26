#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

unsigned int t2, sum2;
float s, t, sum = 0;

void calc(float, float);
int main()
{

	printf("Enter distance (kilometer(s)) \t: ");
	scanf("%f", &s);
	printf("Enter time (minute(s)) \t\t: ");
	scanf("%f", &t);

	if (s >= 0 && t >= 0)
	{
		calc(s, t);
//		printf("%f %f\n%u %u\n", sum, t, sum2, t2);
		printf("Total price \t\t\t: %u", sum2 + t2);
	}
	else
	{
		printf("Error");
	}
	return 0;
}
void calc(float s, float t)
{
	t *= 2.0;
	t2 = int(t);
	if (t2 % 2 == -1 || t2 % 2 == 1)
	{
		t2 -= 1;
	}

	if (s > 80)
	{
		sum += (s - 80) * 10.50;
		s -= (s - 80);
	}
	if (s > 60)
	{
		sum += (s - 60) * 9;
		s -= (s - 60);
	}
	if (s > 40)
	{
		sum += (s - 40) * 8;
		s -= (s - 40);
	}
	if (s > 20)
	{
		sum += (s - 20) * 7.5;
		s -= (s - 20);
	}
	if (s > 10) {
		sum += (s - 10) * 6.5;
		s -= (s - 10);
	}
	if (s > 1 && s <= 10)
	{
		sum += (s - 1) * 5.50;
	}
	sum += 35;


	sum2 = int(ceil(sum));
	if (sum2 % 2 == 0)
	{
		sum2++;
	}
}