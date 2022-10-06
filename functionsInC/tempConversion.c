//Function celcius that returns the celsius equivalent of a fahrenheit temperature
//Function fahrenheit that the fahrenheit equivalent of a celsius temperature
//Celsius equivalents of fahrenheit temps from 32 to 212 degrees fahrenheit
//fahrenheit equivalents of celsius temps from 0 to 100 degrees celsius
//Outputs:neat tabular format thar minimizes the no. of lines of output while
//remaining readable
#include<stdio.h>

float convertToCelsius(float fahrenheit);
float convertToFahrenheit(float celsius);
int main()
{
    float celsius,fahrenheit;
    printf("%s%25s%\n","Fahrenheit Temps", "Celsius Equivalents");
    for(fahrenheit = 32;fahrenheit <= 212;fahrenheit++){
        celsius = convertToCelsius(fahrenheit);
        printf("%16.2f%25.2f\n",fahrenheit,celsius);
    }

    printf("\n");
    printf("%s%30s\n","Celsius Temps","Fahrenheit Equivalents");
    for(celsius = 0;celsius <= 100;celsius++){
        fahrenheit = convertToFahrenheit(celsius);
        printf("%13.2f%30.2f\n",celsius,fahrenheit);
    }
    return 0;
}
float convertToCelsius(float fahrenheit){
    float celsius;
    celsius = (fahrenheit - 32) * 5/9;
    return celsius;
}
float convertToFahrenheit(float celsius){
    float fahrenheit;
    fahrenheit = (celsius * 9/5) + 32;
    return fahrenheit;
}
