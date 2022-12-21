#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct _m Money;

struct _m {
	int num, money;
};

Money maxMoney(Money m[], int n);

int main() {
	Money m[5], king;
	for (int i = 0; i < 5; i++)
	{
		m[i].num = i;
		scanf("%d", &m[i].money);
	}
	king = maxMoney(m, 5);
	printf("ÀúÃà¿Õ %d¹ø %d¿ø \n", king.num, king.money);
	return 0;
}
Money maxMoney(Money m[], int n) {
	Money max = m[0];
	for (int i = 0; i < n; i++)
	{
		if (m[i].money > max.money)
		{
			max = m[i];
		}
	}
	return max;
}