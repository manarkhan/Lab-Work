#include <stdio.h>
#include <math.h>

int main()
{
    int choice;
    float l, b, r, a, c, side;
    float area, perimeter, s;

    printf("1. Rectangle\n");
    printf("2. Circle\n");
    printf("3. Triangle\n");
    printf("4. Cube\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Enter length and breadth: ");
            scanf("%f %f", &l, &b);

            area = l * b;
            perimeter = 2 * (l + b);

            printf("Area = %.2f\n", area);
            printf("Perimeter = %.2f\n", perimeter);
            break;

        case 2:
            printf("Enter radius: ");
            scanf("%f", &r);

            area = 3.14159 * r * r;
            perimeter = 2 * 3.14159 * r;

            printf("Area = %.2f\n", area);
            printf("Perimeter = %.2f\n", perimeter);
            break;

        case 3:
            printf("Enter three sides: ");
            scanf("%f %f %f", &a, &b, &c);

            perimeter = a + b + c;
            s = perimeter / 2;

            area = sqrt(s * (s-a) * (s-b) * (s-c));

            printf("Area = %.2f\n", area);
            printf("Perimeter = %.2f\n", perimeter);
            break;

        case 4:
            printf("Enter side of cube: ");
            scanf("%f", &side);

            area = 6 * side * side;
            perimeter = 12 * side;

            printf("Surface Area = %.2f\n", area);
            printf("Total Edge Length = %.2f\n", perimeter);
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
