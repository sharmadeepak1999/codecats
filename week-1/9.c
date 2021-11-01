#include <stdio.h>
#include <stdlib.h>

int main()
{
    float phy, chem, math, bio, comp, percentage;
    char grade;
    printf("Enter marks of physics, chemistry, math, bio, computer: ");
    scanf("%f%f%f%f%f", &phy, &chem, &math, &bio, &comp);

    percentage = (phy + chem + math + bio + comp) / 5;

    if (percentage >= 90)
    {
        grade = 'A';
    }
    else if (percentage >= 80)
    {
        grade = 'B';
    }
    else if (percentage >= 70)
    {
        grade = 'C';
    }
    else if (percentage >= 60)
    {
        grade = 'D';
    }
    else if (percentage >= 40)
    {
        grade = 'E';
    }
    else
    {
        grade = 'F';
    }

    printf("\nPercentage: %.2f, Grade: %c", percentage, grade);
    printf("\n");
    return 0;
}