#include <stdio.h>
int main() {
	int score, pass;
	printf("������ �Է��ϼ���: ");
	scanf_s("%d", &score);
	printf("�հ����� �Է��ϼ���: ");
	scanf_s("%d", &pass);
	score >= pass ? printf("�հ�\n") : printf("���հ�\n");
	return 0;
}