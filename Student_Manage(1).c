#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ��Ұ� �г⺰ �������� ���α׷�
typedef struct Student_Score SS;

struct Student_Score {
	char name[30]; // �л� �̸�
	int score; // �л� ����
	char grade; // �л� ���
	int count; // ���г� �Ѹ�
	int sum; // �г� ��ü ����
	int avg; // �г� ���
};

int main() {

	SS inform[100]; // ��� ����

	SS inform_2[3]; // ��� ����

	for (int i = 0; i < 3; i++)
	{
		inform_2[i].sum = 0;
		inform_2[i].avg = 0;

		printf("%d �г��� �� �ο� : ", i + 1);

		scanf("%d", &inform_2[i].count);

		for (int j = 0; j < inform_2[i].count; j++)
		{
			printf("%d �г� %d �� �л��� �̸� : ", i + 1, j + 1);

			scanf("%s", &inform[j].name);

			printf("%d �г� %d �� �л��� ���� : ", i + 1, j + 1);

			scanf("%d", &inform[j].score);

			printf("%d �г� %d �� �л��� ��� : ", i + 1, j + 1);

			scanf(" %c", &inform[j].grade);

			inform_2[i].sum += inform[j].score;
		}

		inform_2[i].avg = inform_2[i].sum / inform_2[i].count;
	}

	for (int i = 0; i < 3; i++)
	{
		printf("%d �г��� �� �ο� : %d \n", i + 1, inform_2[i].count);

		for (int j = 0; j < inform_2[i].count; j++)
		{
			printf("%d �г� %d �� �л��� �̸� : %s \n", i + 1, j + 1, inform[j].name);

			printf("%d �г� %d �� �л��� ���� : %d \n", i + 1, j + 1, inform[j].score);

			printf("%d �г� %d �� �л��� ��� : %c \n", i + 1, j + 1, inform[j].grade);
		}

		printf("%d �г��� �� ���� : %d \n", i + 1, inform_2[i].sum);
		printf("%d �г��� ��� ���� : %d \n", i + 1, inform_2[i].avg);
	}

	return 0;
}