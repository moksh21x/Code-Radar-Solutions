#include <stdio.h>
#include <math.h>

int main() {
    double radius,area;
    scanf("%lf", &radius);

    // Calculate the area
    area = M_PI * radius * radius;

    // Display the area
    printf("Area :%.2lf\n", area);

    return 0;
}