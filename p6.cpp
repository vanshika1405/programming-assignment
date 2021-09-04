#include<stdio.h>
#include<conio.h>
void main()
{
    float celsius, fahrenheit;
    printf("Enter temperature in Celsius: ");
    printf("enter temp in fahrenheit:");
    scanf("%f" "%f", &celsius,&fahrenheit);
    
    fahrenheit = (celsius * 9 / 5) + 32;
    celsius = (fahrenheit - 32) * 5 / 9;
    printf("%.2f Celsius = %.2f Fahrenheit", celsius, fahrenheit);
     printf("%.2f Fahrenheit = %.2f Celsius", fahrenheit, celsius);
    getch();
}