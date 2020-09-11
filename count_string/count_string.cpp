#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	char text[1000];
	int i = 0, al = 0, vo = 0, num = 0;
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
	printf("Alphabet = %d\nVowel =  %d\nNumber = %d", al, vo, num);

	return  0;
}