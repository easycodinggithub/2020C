#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() {
	//영어 문장을 입력받아
	//영어단어의 소문자의 길이(갯수)를 알려주는 프로그램을 만드시오.
	char word[50];
	int str = 0;
	int str_2 = 0;
	scanf("%[^\n]", word);
	//예시 Hello 라면 4 출력
	//I Love you 라면 소문자 개수 6 출력

	str = strlen(word);

	for (int i = 0; i < str; i++)
	{
		if (word[i] >= 97 && word[i] <= 122)
		{
			++str_2;
		}
	}

	printf("%d", str_2);


	return 0;
}