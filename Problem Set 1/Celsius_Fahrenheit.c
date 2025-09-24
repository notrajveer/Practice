#include<stdio.h>
int main() {
    float celcius, fahrenheit;
    printf("\n Enter the temperature in Celcius \n");
    scanf ("%f", &celcius);
    fahrenheit = (celcius * 9/5) + 32;
    printf("The value of temperature in Fahrenheit is %f", fahrenheit);
    return 0;
}