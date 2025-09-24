#include <stdio.h>
int main()
{

    float Principle, Time, Rate;
    printf("\n Enter the Principle Interest \n");
    scanf("%f",&Principle);
    printf("Enter the no. of years \n");
    scanf("%f",&Time);
    printf("Enter the percentage rate of interest \n");
    scanf("%f",&Rate);
    float Interest = (Rate * Principle * Time) / 100;
    printf("The simple interest on the given values is %f", Interest);

    return 0;
}