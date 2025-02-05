#include <stdio.h>

int main() {
    float radius,area;
    scanf("%f", &radius);

    // Calculate the area
    area = 3.14 * radius * radius;

    // Display the area
    printf("Area :%.lf\n", area);

    return 0;
}