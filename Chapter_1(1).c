#include <stdio.h>
int main() {
	int num;
	while (1) {
		printf("���ڸ� �Է��ϼ���: ");
		scanf_s("%d", &num);
		if (num < 0)
			break;
		if (num == 0)
			continue;
		if (num % 2 == 1)
			printf("Ȧ��\n");
		else
			printf("¦��\n");
	}
	return 0;
}