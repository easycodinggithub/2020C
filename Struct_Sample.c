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

	printf("몇번 반복하시겠습니까 :");

	scanf("%d", &Count);

	for (int i = 0; i < Count; i++)
	{
		printf("당신의 이름은 : ");

		scanf("%s", person[i].name);

		printf("당신의 나이는 : ");

		scanf("%d", &person[i].age);

		printf("당신의 주소는 : ");

		scanf("%s", person[i].address);

		printf("\n");
	}

	for (int i = 0; i < Count; i++)
	{
		printf("%d 번 님의 정보 \n", i + 1);

		printf("이름 : %s \n", person[i].name);
		printf("나이 : %d \n", person[i].age);
		printf("주소 : %s \n\n", person[i].address);
	}

	return 0;
}