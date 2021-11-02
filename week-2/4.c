#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("\n");

    int f = 0;
    for(int i = 2; i <= n / 2; i++) {
        if(n % i == 0) {
            f = 1;
            break;
        }
    }

    if (!f && n != 1)
    {
        printf("It is a prime number!");
    }
    else
    {
        printf("It is not a prime number!");
    }
    printf("\n");
    return 0;
}