#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	char text[10000];
	int i = 0, al = 0, vo = 0, w = 0, num = 0;
	scanf("%[^\n]", text);
	while (text[i] != '\0') {
		if (text[i] == 65 || text[i] == 69 || text[i] == 73 || text[i] == 79 || text[i] == 85 || text[i] == 97 || text[i] == 101 || text[i] == 105 || text[i] == 111 || text[i] == 117) {
			vo++;
		}
		else if ((text[i] >= 65 && text[i] <= 90) || (text[i] >= 97 && text[i] <= 122)) {
			al++;
		}
		else if (text[i] >= 48 && text[i] <= 57) {
			num++;
		}
		//		else if(text[i] == ' ' ){
		//			w++;
		//		}

		i++;
	}

	//	if(al != 0 && vo != 0 && num != 0)
	//		w++;
	//	else if(al == 0 && vo == 0 && num == 0)
	//		w = 0;
	printf("Alphabet = %d\nVowel =  %d\nNumber = %d"/*\nWord = %d "*/, al, vo, num/*,w*/);

	return  0;
}