#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char c, kb[5] = { 'w', 's', 'a', 'd' };
	int i = 0, count[6] = { 0 }; // count : w s a d x y
	printf("Enter only w a s d !\n________START________\n");
	while (1)
	{
		scanf("%c", &c);
		if (c == 'a' || c == 'd' || c == 'w' || c == 's')
		{
			if (c == 'w')
			{
				count[0]++;
				count[5] += 25;
			}
			if (c == 's')
			{
				count[1]++;
				count[5] -= 20;
			}
			if (c == 'a')
			{
				count[2]++;
				count[4] += 15;
			}
			if (c == 'd')
			{
				count[3]++;
				count[4] -= 30;
			}
			++i;
		}
		else if (c == '!')
		{
			printf("_________End_________\n");
			break;
		}
		else if (c != ' ' && c != '\n')
		{
			printf("Enter w a s d , please!\n");
		}
	}
	printf("Total controls \t: %d\n", i);
	for (i = 0; i < 4; i++)
	{
		printf("%c \t\t: %d\n", kb[i], count[i]);
	}
	printf("position (x, y) : (%d, %d)", count[4], count[5]);

}