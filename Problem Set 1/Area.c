#include <stdio.h>
int main()
{

    int length, breadth, area;
    printf("\n Enter the length of the rectangle.\n");
    scanf("%d", &length);
    printf("\n Enter the breadth of the rectangle\n");
    scanf("%d", &breadth);
    area = length * breadth;
    printf("\n the area of rectangle is %d", area);
    return 0;
}