#include <stdio.h>

int Fahrenheit(int celsius){
    return (celsius * 9 / 5) + 32;
}

int Celsius(int fahrenheit){
    return (fahrenheit - 32) * 5 / 9;
}


int main(int argc, char const *argv[]) {
    char mode;
    int temperature;

    printf("Please select what do you want to convert:\n");
    printf("C - Celsius to Fahrenheit, F - Fahrenheit to Celsius\n");

    scanf("%c", &mode);  

    printf("Enter the temperature to convert: "); 
    scanf("%d", &temperature);

    switch (mode) {
        case 'C':
        case 'c':
            printf("%d Celsius is %d Fahrenheit\n", temperature, Celsius(temperature));
            break;
        case 'F':
        case 'f': 
            printf("%d Fahrenheit is %d Celsius\n", temperature, Fahrenheit(temperature));
            break;
        default:
            printf("Invalid mode, please select 'C' or 'F'\n");
            break;
    }

    return 0;
}
