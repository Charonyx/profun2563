#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
char text[1000], line[] = "----------------------------\n";
int i = 0, al = 0, vo = 0, num = 0;
void count();
int main()
{
	FILE* fp;
	fp = fopen("data.txt", "a+t");

	if (fp == NULL)
	{
		printf("File not found\n");
	}
	else
	{
		count();
		fprintf(fp, "Text \t = %s\nAlphabet = %d\nVowel \t = %d\nNumber \t = %d \n%s", text, al, vo, num, line);
		fclose(fp);
	}
	return  0;
}

void count()
{
	scanf("%[^\n]", text);
	while (text[i] != '\0') {
		if (text[i] == 'A' || text[i] == 'E' || text[i] == 'I' || text[i] == 'O' || text[i] == 'U' || text[i] == 'a' || text[i] == 'e' || text[i] == 'i' || text[i] == 'o' || text[i] == 'u') {
			vo++;
		}
		else if ((text[i] >= 'A' && text[i] <= 'Z') || (text[i] >= 'a' && text[i] <= 'z')) {
			al++;
		}
		else if (text[i] >= 48 && text[i] <= 57) {
			num++;
		}
		i++;
	}
	printf("Alphabet = %d\nVowel \t = %d\nNumber \t = %d \n", al, vo, num);

}