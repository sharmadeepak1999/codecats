#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n;
    printf("Enter 1st number: ");
    scanf("%d", &m);
    printf("\n");

    printf("Enter 2nd number: ");
    scanf("%d", &n);
    printf("\n");

    if (m == n)
    {
        printf("Both numbers are equal. Maximum = %d", m);
    }
    else if(m > n)
    {
        printf("Maximum = %d", m);
    } else {
        printf("Maximum = %d", n);
    }
    printf("\n");
    return 0;
}