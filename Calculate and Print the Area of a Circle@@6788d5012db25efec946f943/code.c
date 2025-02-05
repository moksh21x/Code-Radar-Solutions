#include <stdio.h>
#include <math.h>

int main() {
    double radius, area;

    // Prompt the user for the radius
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    // Calculate the area
    area = M_PI * radius * radius;

    // Display the area
    printf("The area of the circle with radius %.2lf is: %.2lf\n", radius, area);

    return 0;
}