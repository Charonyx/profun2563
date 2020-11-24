#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
char* t, text[1001];
int* a, a_z[52] = { 0 };
int i = 0, j;

void printy(int* a);
void loopy(char* t);

int main()
{
	printf("Input : ");
	scanf("%[^\n]", text);
	t = text;
	loopy(t);
	return 0;
}
void printy(int* a)
{
	for (j = 0; j < 52; j++)
	{
		if (*(a + j) != '\0')
		{
			if (j >= 0 && j < 26)
				printf("%c = %d\n", j + 'A', *(a + j));
			if (j >= 26 && j < 52)
				printf("%c = %d\n", j + 71, *(a + j));
		}
	}
}
void loopy(char* t)
{
	a = a_z;
	while (*(t + i) != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (*(t + i) >= 'A' && *(t + i) <= 'Z')
			{
				if (*(t + i) - 'A' == j)
				{
					*(a + j) += 1;
				}
			}
			if (*(t + i) >= 'a' && *(t + i) <= 'z')
			{
				if (*(t + i) - 'a' + 26 == j)
				{
					*(a + j) += 1;
				}
			}
		}
		i++;
	}
	printy(a);
}