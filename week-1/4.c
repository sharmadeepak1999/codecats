#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);
    printf("\n");

    if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
    {
        printf("It is a leap year!");
    }
    else
    {
        printf("It is not a leap year!");
    }
    printf("\n");
    return 0;
}