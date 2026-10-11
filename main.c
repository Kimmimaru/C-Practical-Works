#include <stdio.h>
#include <math.h>

int main(void)
{
    double alpha, radians;
    double z1, z2;

    const double PI = acos(-1.0);
    const double EPS = 1e-10;

    printf("Enter angle alpha (degrees): ");
    if (scanf("%lf", &alpha) != 1)
    {
        printf("Invalid input!\n");
        return 1;
    }

    radians = alpha * PI / 180.0;

    double denominator1 = cos(radians) + sin(radians);

    if (fabs(denominator1) < EPS)
    {
        printf("z1 is undefined (division by zero).\n");
    }
    else
    {
        z1 = (cos(radians) + sin(radians)) / denominator1;
        printf("z1 = %.6f\n", z1);
    }

    double denominator2 = cos(2.0 * radians);

    if (fabs(denominator2) < EPS)
    {
        printf("z2 is undefined (division by zero).\n");
    }
    else
    {
        z2 = sin(2.0 * radians) / denominator2 + 1.0 / denominator2;

        printf("z2 = %.6f\n", z2);
    }

    return 0;
}