#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("\n");

    if (n % 2 == 0)
    {
        printf("Even Number");
    }
    else
    {
        printf("Odd Number");
    }
    printf("\n");
    return 0;
}