#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("\n");
    printf("The first %d natural numbers: ", n);

    for (int i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }
    printf("\n");

    printf("Sum of first %d natural number: %d \n", n, (n * (n + 1)) / 2);
    return 0;
}