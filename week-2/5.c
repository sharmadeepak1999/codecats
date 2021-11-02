#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("\n");

    int rm, rn = 0;

    while (n > 0)
    {
        rm = n % 10;
        rn = rn * 10 + rm;
        n /= 10;
    }

    printf("Reverse number: %d", rn);
    printf("\n");
    return 0;
}