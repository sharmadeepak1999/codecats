#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);
    printf("\n");
    printf("Input %d elements of array: ", n);
    printf("\n");

    int arr[100], sum, soe, soo, soep, soop;
    sum = soe = soo = soep = soop = 0;

    for (int i = 0; i < n; i++)
    {
        int num;
        scanf("%d", &num);
        arr[i] = num;
        printf("\n");
    }

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        if (arr[i] % 2 == 0)
        {
            soe += arr[i];
        }
        else
        {
            soo += arr[i];
        }

        if (i % 2 == 0)
        {
            soep += arr[i];
        }
        else
        {
            soop += arr[i];
        }
    }
    printf("Sum of all elements of array: %d \n", sum);
    printf("Sum of even elements of array: %d \n", soe);
    printf("Sum of odd elements of array: %d \n", soo);
    printf("Sum of even position elements of array: %d \n", soep);
    printf("Sum of odd position elements of array: %d \n", soop);
    return 0;
}