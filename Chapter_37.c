#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct info IN;

struct info {
	char name[30];
	int old;
};

int main() {
	IN people[3];

	for (int i = 0; i < 3; i++)
		{
			printf("== %d ��° ��� ���� �Է� == \n", i + 1);

			scanf("%s", people[i].name);
			scanf("%d", &people[i].old);
		}

	FILE* fp = fopen("Informatiom.txt", "w");
	
	for (int j = 0; j < 3; j++)
	{
		fprintf(fp, "%s : %d \n", people[j].name, people[j].old);
	}

	fclose(fp);
	return 0;
}
