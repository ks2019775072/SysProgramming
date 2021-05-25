#include <stdio.h>

int main() {
	char char1;
	char lowercase;
	char uppercase;

	do {
		printf("문자입력: ");
		scanf(" %c", &char1);		
		
		if(char1 >= 'a' && char1 <= 'z') {
			uppercase = char1 - 32;
			printf("%c의 대문자는 %c 입니다.\n", char1,uppercase);
		}
		if(char1 >= 'A' && char1 <= 'Z') {
			lowercase = char1 + 32;
			printf("%c의 소문자는 %c 입니다.\n", char1,lowercase);

		}
	
	} while(char1 != '0');

	return 0;

}
