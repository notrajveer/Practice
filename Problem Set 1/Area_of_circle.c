#include <stdio.h>
int main()
{

    float radius;
    float area;
    float length;
    printf("\nEnter the radius of the cylinder: \n");
    scanf("%f", &radius);
    printf("Enter the length of the cylinder: \n");
    scanf("%f", &length);
    area = 3.14 * radius * radius * length;
    printf("\nThe area of the cylinder is %f", area);

    return 0;
}