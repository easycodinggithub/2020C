#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct _p {
	char name[20];
	int he;
	double we;
} Point;
Point p[5];
void input();
void output();
void sort();
int main() {
	Point p[5];
	input(p);
	sort(p);
	output(p);
}
void input() {
	for (int i = 0; i < 5; i++)
	{
		scanf("%s %d %lf", p[i].name, &p[i].he, &p[i].we);
	}
}
void sort() {
	char tmp_name[20];
	int tmp_he;
	double tmp_we;
	for (int i = 0; i < 4; i++)
	{
		for (int j = i + 1; j < 5; j++)
		{
			if (p[i].he > p[i].he)
			{
				strcpy(tmp_name, p[i].name);
				strcpy(p[i].name, p[j].name);
				strcpy(p[j].name, tmp_name);

				tmp_he = p[i].he;
				p[i].he = p[j].he;
				p[j].he = tmp_he;

				tmp_we = p[i].we;
				p[i].we = p[j].we;
				p[j].we = tmp_we;
			}
		}
	}
}
void output() {
	for (int i = 0; i < 5; i++)
	{
		printf("%s %d %.1f \n", p[i].name, p[i].he, p[i].we);
	}
}