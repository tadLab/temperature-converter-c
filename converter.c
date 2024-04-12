#include <stdio.h>

int Fahrenheit(int celsius){
    return (celsius * 9 / 5) + 32;
}

int Celsius(int fahrenheit){
    return (fahrenheit - 32) * 5 / 9;
}


int main(int argc, char const *argv[])
{
    char mode;
    int temperature;

    printf("Please select what do you want to convert:\n");
    printf("C - Celsius to Fahrenheit, F - Fahrenheit to Celsius\n");

    scanf("%c", &mode);

    printf("How much %c do you want to convert?\n", mode);
    scanf("%d", &temperature);

    switch (mode)
    {
    case 'F':
        printf("%d Fahrenheit is %d Celsius", temperature, Celsius(temperature));
        break;
    case 'C':
        printf("%d Celsius is %d Fahrenheit", temperature, Fahrenheit(temperature));
        break;
    default:
        printf("There was an error, try again");
        break;
    }

    return 0;
}
