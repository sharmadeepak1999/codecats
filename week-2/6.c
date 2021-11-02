#include <stdio.h>
#include <stdlib.h>

int main()
{
    int b, p;
    printf("Enter two numbers: ");
    scanf("%d%d", &b, &p);
    printf("\n");

    int r = 1;

    while (p > 0)
    {
        r *= b;
        p--;
    }

    printf("Answer: %d", r);
    printf("\n");
    return 0;
}