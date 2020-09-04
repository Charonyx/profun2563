#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	char text[10000];
	int i = 0, count = 0;
	scanf("%[^\n]", text);
	while (text[i] != '\0') {
		if (text[i] >= 'A' && text[i] <= 'Z')
			text[i] += 32;
		if (text[i - 4] == 'n' && text[i - 3] == 'e' && text[i - 2] == 'v' && text[i - 1] == 'e' && text[i] == 'r') {
			count++;
		}
		i++;
	}
	printf("%d", count);
	return 0;
}