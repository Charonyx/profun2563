#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void flow(float vol[5]);
int main()
{
	float vol[5], error = 0;
	vol[4] = 1;
	char text[4][50] = { "width (m)\t\t", "length (m)\t", "height (m)\t", "flow rate (m^3/minute)" };
	for (int i = 0; i < 4; i++)
	{
		printf("Enter %s : ", text[i]);
		scanf("%f", &vol[i]);
		if (i < 3)
		{
			vol[4] *= vol[i];
		}
		if (vol[i] < 0 || vol[i] == 0)
		{
			error = 1;
			break;
		}
	}
	if (error == 0)
	{
		flow(vol);
	}
	else {
		printf("Enter a positive number, please!");
	}

	return 0;
}
void flow(float vol[5])
{
	printf("Time : %.2f minutes", vol[4] / vol[3] * 1.0);
}