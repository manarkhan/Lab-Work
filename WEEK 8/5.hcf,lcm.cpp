#include <stdio.h>

int main()
{
    int a, b, x, y, hcf, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    x = a;
    y = b;

    while(y != 0)
    {
        hcf = x % y;
        x = y;
        y = hcf;
    }

    hcf = x;
    lcm = (a * b) / hcf;

    printf("HCF = %d\n", hcf);
    printf("LCM = %d", lcm);

    return 0;
}
