#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("\n");

    /*
    Alternate long approach
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            printf(" ");
        }
        printf("*");
        for (int j = 1; j <= ((n - i) * 2 - 1); j++)
        {
            printf(" ");
        }
        if (i != n)
        {
            printf("*");
        }
        printf("\n");
    }
    */

    int count = n * 2 - 1;

    for (int i = 1; i <= count; i++)
    {
        for (int j = 1; j <= count; j++)
        {
            if (i == j || (j == count - i + 1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}