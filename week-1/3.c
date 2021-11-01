#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, n3;
    printf("Enter 1st number: ");
    scanf("%d", &n1);
    printf("\n");

    printf("Enter 2nd number: ");
    scanf("%d", &n2);
    printf("\n");

    printf("Enter 3rd number: ");
    scanf("%d", &n3);
    printf("\n");

    if (n1 > n2 && n1 > n3)
    {
        printf("Maximum = %d", n1);
    }
    else if(n2 > n1 && n2 > n3)
    {
        printf("Maximum = %d", n2);
    } else {
        printf("Maximum = %d", n3);
    }
    printf("\n");
    return 0;
}