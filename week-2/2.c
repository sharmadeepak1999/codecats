#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("\n");

    int f = 1; 
    for (int i = 2; i <= n; i++)
    {
        f *= i;
    }
    printf("The factorial of %d: %d", n, f);
    printf("\n");
    return 0;
}