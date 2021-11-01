#include <stdio.h>
#include <stdlib.h>

int main()
{
    float base, hra, da;
    printf("Enter base salary: ");
    scanf("%f", &base);

    if (base <= 10000)
    {
        hra = base * 0.2;
        da = base * 0.8;
    }
    else if (base <= 20000)
    {
        hra = base * 0.25;
        da = base * 0.9;
    }
    else if (base > 20000)
    {
        hra = base * 0.3;
        da = base * 0.95;
    }

    printf("\nGross Salary: %.2f", base + da + hra);
    printf("\n");
    return 0;
}