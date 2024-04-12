#include <stdio.h>

int Fahrenheit(int temperature){}

int Celsius(int temperature){

}


int main(int argc, char const *argv[])
{
    char mode[1];
    int temperature;

    printf("Please select what do you want to convert:\n");
    printf("C - Celsius to Fahrenheit, F - Fahrenheit to Celsius\n");

    scanf("%c\n", &mode);

    printf("How much %c do you want to convert?\n");
    scanf("%d", &temperature);

    switch (mode)
    {
    case 'C':
        printf("%d", Celsius(temperature));
        break;
    case 'F':
        printf("%d", Fahrenheit(temperature));
        break;
    default:
        printf("There was an error, try again");
        break;
    }

    return 0;
}
