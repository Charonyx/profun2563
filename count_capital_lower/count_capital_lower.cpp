#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main() {
	char text[101];
	int i = 0, sum = 0, sum2 = 0;
	scanf("%[^\n]", text);
	while (text[i] != '\0') {
		if (text[i] >= 97 && text[i] <= 122) {
			sum++;
		}
		else if (text[i] >= 65 && text[i] <= 90) {
			sum2++;
		}
		i++;
	}
	printf("Capital letter = %d \nLower-case letter = %d", sum2, sum);

	return 0;
}