#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

struct Person { 
    char name[20];        
    int age;              
    char address[100];    
};

int main() {
	
	int Count;

    struct Person person[5];

	printf("��� �ݺ��Ͻðڽ��ϱ� :");

	scanf("%d", &Count);

	for (int i = 0; i < Count; i++)
	{
		printf("����� �̸��� : ");

		scanf("%s", person[i].name);

		printf("����� ���̴� : ");

		scanf("%d", &person[i].age);

		printf("����� �ּҴ� : ");

		scanf("%s", person[i].address);

		printf("\n");
	}

	for (int i = 0; i < Count; i++)
	{
		printf("%d �� ���� ���� \n", i + 1);

		printf("�̸� : %s \n", person[i].name);
		printf("���� : %d \n", person[i].age);
		printf("�ּ� : %s \n\n", person[i].address);
	}

	return 0;
}