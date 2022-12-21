#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    int arr[100][100];
    int n, m, num = 0;
    scanf("%d %d", &n, &m);

    for (int i = 0; i < (n * m); i++)
    {
        for (int j = 0; j < n; j++)
        {
            int k = i - j;

            if (k >= 0 && k < m)
                arr[k][j] = ++num;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%3d", arr[i][j]);
        }

        printf("\n");
    }
}