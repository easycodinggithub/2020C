#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main() {
	//���� ������ �Է¹޾�
	//����ܾ��� �ҹ����� ����(����)�� �˷��ִ� ���α׷��� ����ÿ�.
	char word[50];
	int str = 0;
	int str_2 = 0;
	scanf("%[^\n]", word);
	//���� Hello ��� 4 ���
	//I Love you ��� �ҹ��� ���� 6 ���

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