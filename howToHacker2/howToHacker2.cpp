#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void findKeyWord(char text[1000]);
int main()
{
	char* p, text[1000];
	scanf("%[^\n]", text);
	findKeyWord(text);
	return 0;
}
void findKeyWord(char text[1000])
{
	int i = 0, j = 0;
	char* p = text;
	while (p /* != '\0' */) // *(p + i) == p[i]
	{
		if (*(p + i - 1) == ':' && *(p + i) == '[' && *(p + i - 8) == 'C' && *(p + i - 7) == 'E' && *(p + i - 6) == 'l' && *(p + i - 5) == 'n' && *(p + i - 4) == 'w' && *(p + i - 3) == 'Z' && *(p + i - 2) == 'a')
		{
			j = 1;
		}
		else if (*(p + i) == ']')
		{
			j = 0;
		}
		if (j == 1 && *(p + i) != '[' && *(p + i) != ':')
		{
			printf("%c", *(p + i));
		}
		i++;
	}
}