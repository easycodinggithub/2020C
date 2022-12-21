#include <stdio.h>
int main(void)
{
    int arry[100];
    int i;

    for (i = 0; i <= 5; i++)
    {
        scanf_s("%d", &arry[i]);
    }

    for (i = 5; i >= 0; i--)
    {
        printf("%d ", arry[i]);
    }

    return 0;
}