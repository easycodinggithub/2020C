#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
typedef struct Books BB;
struct Books {
	char name[30]; // �̸�
	char auth[30]; // ������
	char publ[30]; // ���ǻ�
	int borrowed; // �뿩 ����
	int amount; // ������ ����
};
int main() {
	// struct Books book_list[3]; // ��� ����
	BB book_list[3]; // ��� ����
	for (int i = 0; i < 3; i++)
	{
		printf("å %d ���� �Է� : ", i);
		scanf("%s%s%s", book_list[i].name, book_list[i].auth, book_list[i].publ);
		book_list[i].borrowed = 0;
	}
	for (int i = 0; i < 3; i++)
	{
		printf("==================================== \n");
		printf("å %s �� ����\n", book_list[i].name);
		printf("���� : %s \n", book_list[i].auth);
		printf("���ǻ� : %s \n", book_list[i].publ);

		if (book_list[i].borrowed == 0)
		{
			printf("�� ������ \n");
		}
		else {
			printf("������ \n");
		}
	}

	return 0;
}