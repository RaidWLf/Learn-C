#include <stdio.h>
int main()
{
    int choice;
    float no;

    int a = 0;
    while (a == 0)
    {
        printf("\n\nSelect the conversion you want by entering the rank !\n 1. Kilometer   -> Inches \n 2. Inches      -> Foot \n 3. Centimeters -> Inches  \n 4. Pound       -> Kilogram  \n 5. Inches      -> Meter \n Enter the choice you want - ");

        scanf("%d", &choice);
        printf("enter the unit  - ");

        scanf("%f", &no);
        if (choice == 1)
            printf("%f kilometer = %f inches ", no, 39370.0 * no);

        else if (choice == 2)
            printf("%f inches = %f foot ", no, 0.0833333 * no);

        else if (choice == 3)
            printf("%f Centimeter = %f inches ", no, 0.3937 * no);

        else if (choice == 4)
            printf("%f Pound = %f Kilograms ", no, 0.453592 * no);

        else if (choice == 5)
            printf("%f Inches = %f Meters ", no, 0.0254 * no);

        printf("\n IF YOU WANT TO DO MORE CONVERSION PRESS 0 ELSE 1 TO EXIT   - ");
        scanf("%d", &a);
    }
    return 0;
}