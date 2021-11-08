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

    int arr[100];

    for (int i = 0; i < n; i++)
    {
        int num;
        scanf("%d", &num);
        arr[i] = num;
        printf("\n");
    }

    int num, occ = 0;
    printf("Input number to check occurence: ");
    scanf("%d", &num);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            occ++;
        }
    }
    printf("Occurence of %d in array: %d \n", num, occ);
    return 0;
}