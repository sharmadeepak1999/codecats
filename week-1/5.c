#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;
    printf("Enter character: ");
    scanf("%c", &c);
    printf("\n");

    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        printf("It is an alhabet!");
    }
    else if(c >= '0' && c <= '9')
    {
        printf("It is a number!");
    } else {
        printf("It is a special character!");
    }
    printf("\n");
    return 0;
}