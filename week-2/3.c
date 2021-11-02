#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("\n");

    int r, temp = n, sum = 0;
    while (temp > 0)
    {
        r = temp % 10;
        sum += r * r * r;
        temp /= 10;
    }

    if (sum == n)
    {
        printf("It is a armstrong number!");
    }
    else
    {
        printf("It is not a armstrong number!");
    }
    printf("\n");
    return 0;
}