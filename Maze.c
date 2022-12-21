#include <stdio.h>
int m[9][9] = { // maze
{2,2,2,2,2,2,2,2,2},
{2,0,0,0,0,0,0,0,2},
{2,0,2,2,0,2,2,0,2},
{2,0,2,0,0,2,0,0,2},
{2,0,2,0,2,0,2,0,2},
{2,0,0,0,0,0,2,0,2},
{2,2,0,2,2,0,2,2,2},
{2,0,0,0,0,0,0,0,2},
{2,2,2,2,2,2,2,2,2} };
int Si, Sj, Ei, Ej, success, top, ri[100], rj[100];
// S : Start, ����� E : End, ������, sp ����������(top)
// ri, rj : ������ ���� ������ i�� ��, j�� ��
int visit(int, int);
int main() {
	top = 0; // ������ top ��ġ ����
	success = 0; // �̷� Ż�� ����
	printf("=== �̷� Ż�� ��� ã�� ���� === \n");
	Si = 1, Sj = 1; // �����
	Ei = 7, Ej = 7; // ������
	if (visit(Si, Sj) == 0)
	{
		printf("�ⱸ�� ã�� �� ���� \n");
	}
	else {
		printf("��� ��θ� ã���� \n");
		return 0;
	}
	return 0;
}
int visit(int i, int j) {
	static int path = 1;
	m[i][j] = 1;
	ri[top] = i, rj[top] = j;
	top++;
	if (i == Ei && j == Ej) // �������� �������� ��
	{
		printf("ã�� ��� %d �� \n", path++);
		for (int k = 0; k < top; k++)
		{
			printf("(%d, %d) ", ri[k], rj[k]);
			success = 1; // ��θ� ���������� ã��
		}
		printf("\n");
	}

	///// �̷� Ž�� ���� ����� /////
	if (m[i][j + 1] == 0) // right
	{
		visit(i, j + 1);
	}
	if (m[i + 1][j] == 0) // down
	{
		visit(i + 1, j);
	}
	if (m[i][j - 1] == 0) // left
	{
		visit(i, j - 1);
	}
	if (m[i - 1][j] == 0) // up
	{
		visit(i - 1, j);
	}
	top--;
	m[i][j] = 0;
	return success;
}