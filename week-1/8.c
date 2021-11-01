#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, c, root1, root2, imaginary, discriminant;
    printf("Enter a, b, c: ");
    scanf("%f%f%f", &a, &b, &c);

    discriminant = (b * b) - (4 * a * c);

    if (discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);

        printf("\nReal and distinct roots, Root1: %.2f, Root2: %.2f", root1, root2);
    }
    else if (discriminant == 0)
    {
        root1 = root2 = -b / (2 * a);
        printf("\nReal and equal root, Root1: %.2f, Root2: %.2f", root1, root2);
    }
    else
    {
        root1 = root2 = -b / (2 * a);
        imaginary = sqrt(-discriminant) / (2 * a);

        printf("Two distinct complex roots exists: %.2f + i%.2f and %.2f - i%.2f",
               root1, imaginary, root2, imaginary);
    }
    printf("\n");
    return 0;
}